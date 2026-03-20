#pragma once

#include <windows.h>
#include <vector>
#include <string>
#include <filesystem>
#include <fstream>

// A ordem abaixo é CRÍTICA para evitar erros de sintaxe no minizip-ng
#include <minizip-ng/mz.h>
#include <minizip-ng/mz_crypt.h>
#include <minizip-ng/mz_strm.h>
#include <minizip-ng/mz_strm_mem.h>
#include <minizip-ng/mz_zip.h>
#include <minizip-ng/mz_zip_rw.h> // Este deve vir por último

#pragma comment(lib, "bcrypt.lib")


#include "../resource.h"

class ZipManager {
public:
    static bool LoadFromResource(std::vector<uint8_t>& data) {
        // Busca o recurso ZIP embutido no .exe
        HRSRC res = FindResource(NULL, MAKEINTRESOURCE(IDR_ZIP1), L"zip");
        if (!res) return false;

        HGLOBAL resHandle = LoadResource(NULL, res);
        if (!resHandle) return false;

        DWORD size = SizeofResource(NULL, res);
        void* ptr = LockResource(resHandle);
        if (!ptr) return false;

        data.assign((uint8_t*)ptr, (uint8_t*)ptr + size);
        return true;
    }

    static bool Extract(const std::vector<uint8_t>& zipData, const std::wstring& dest) {
        if (zipData.empty()) return false;

        // Cria o stream de memória para o ZIP
        void* mem_stream = mz_stream_mem_create();
        if (!mem_stream) return false;

        mz_stream_mem_set_buffer(mem_stream, (void*)zipData.data(), (int32_t)zipData.size());

        // Abre o leitor de ZIP a partir do stream de memória
        void* zip_reader = mz_zip_reader_create();
        if (mz_zip_reader_open(zip_reader, mem_stream) != MZ_OK) {
            mz_stream_mem_delete(&mem_stream);
            return false;
        }

        mz_zip_file* file_info = NULL;
        if (mz_zip_reader_goto_first_entry(zip_reader) == MZ_OK) {
            do {
                if (mz_zip_reader_entry_get_info(zip_reader, &file_info) != MZ_OK)
                    continue;

                std::filesystem::path outPath = std::filesystem::path(dest) / file_info->filename;

                // Se for um diretório (termina com '/')
                if (file_info->filename[strlen(file_info->filename) - 1] == '/') {
                    std::filesystem::create_directories(outPath);
                }
                else {
                    // Garante que a pasta pai existe
                    std::filesystem::create_directories(outPath.parent_path());

                    if (mz_zip_reader_entry_open(zip_reader) == MZ_OK) {
                        std::ofstream file(outPath, std::ios::binary);
                        if (file.is_open()) {
                            uint8_t buffer[8192];
                            int32_t read;
                            while ((read = mz_zip_reader_entry_read(zip_reader, buffer, sizeof(buffer))) > 0) {
                                file.write((char*)buffer, read);
                            }
                            file.close();
                        }
                        mz_zip_reader_entry_close(zip_reader);
                    }
                }
            } while (mz_zip_reader_goto_next_entry(zip_reader) == MZ_OK);
        }

        // Limpeza dos objetos do minizip
        mz_zip_reader_close(zip_reader);
        mz_zip_reader_delete(&zip_reader);
        mz_stream_mem_delete(&mem_stream);

        return true;
    }
};