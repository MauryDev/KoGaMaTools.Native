# KoGaMaTools.Native

![Banner do Projeto](src/img/banner.jpg)

Uma ferramenta nativa desenvolvida em C++ para injetar funcionalidades extras e modificações no cliente do jogo KoGaMa (Standalone). O projeto utiliza instrumentação IL2CPP para interagir diretamente com as classes internas do jogo, oferecendo recursos como "No Limit" para construção e pintura de faces individuais.

## 🛡 Badges

![C++](https://img.shields.io/badge/Language-C++20-blue)
![Platform](https://img.shields.io/badge/Platform-Windows-0078D6)
![License](https://img.shields.io/badge/License-MIT-green)
![Status](https://img.shields.io/badge/Status-Develop-orange)

## 🚧 Status do Projeto

O projeto encontra-se em desenvolvimento ativo (branch `develop`). Novas funcionalidades e metadados estão sendo mapeados continuamente.

## 📋 Tabela de Conteúdos

- [Sobre](#kogamatoolsnative)
- [Features](#-features)
- [Demonstração](#-demonstração-da-aplicação)
- [Pré-requisitos](#-pré-requisitos)
- [Como Rodar](#-como-rodar-a-aplicação)
- [Tecnologias Utilizadas](#-tecnologias-utilizadas)
- [Contribuição](#-contribuição)
- [Autor](#-autor)
- [Licença](#-licença)

## 🚀 Features

O projeto injeta uma DLL no processo do jogo e apresenta um menu (Overlay) utilizando ImGui e DirectX 11.

* **In-Game Menu**: Interface gráfica acessível dentro do jogo para ativar/desativar funções em tempo real.
* **No Limit**: Remove as restrições de construção do jogo.
    * Ignora limites de quantidade de cubos (BoxCountConstraint).
    * Ignora limites de área dinâmica (DynamicBoxConstraint).
* **Single Paint Face**: Modifica a ferramenta de pintura para permitir pintar apenas uma face única de um cubo, ao invés do cubo inteiro ou áreas adjacentes.
* **Suporte Multi-Região**: Detecção automática da região do servidor (BR, WWW, Friends) para carregar os metadados corretos.

## 📷 Demonstração da Aplicação

![In-Game Projeto](src/img/demostração.png)

## ⚙️ Pré-requisitos

Para compilar e executar o projeto, você precisará de:

* **Sistema Operacional**: Windows (x64).
* **IDE**: Visual Studio 2022 (com suporte a C++ v145).
* **Dependências**:
    * O projeto depende de metadados IL2CPP gerados (`Tools.Il2Cpp.ICalls.dat`, `KoGaMaAPI.KoGaMa.dat`).
    * Biblioteca MinHook (já referenciada no projeto).

## 🏃 Como rodar a aplicação

### Compilação

1.  Clone o repositório.
2.  Abra o arquivo de solução `KoGaMaTools.Native.slnx` no Visual Studio.
3.  Selecione a configuração `Release` ou `Debug` e a plataforma `x64`.
4.  Compile o projeto.

### Instalação/Injeção

Após a compilação, o script de build (`build/publish.cmd`) organiza os arquivos de saída.

1.  A DLL gerada (`KoGaMaTools.Native.dll`) deve ser injetada no processo do jogo KoGaMa.
2.  **Importante**: A DLL espera encontrar uma estrutura de pastas específica para carregar os metadados corretos baseados na região do executável do jogo. Certifique-se de que a DLL `minhook.x64.dll` e a pasta com os metadados (ex: `BR/`, `WWW/`) estejam no diretório de trabalho esperado pela injeção.

## 🛠 Tecnologias utilizadas

* **[C++ 20](https://en.cppreference.com/w/cpp/20)** - Linguagem principal do projeto.
* **[MinHook](https://github.com/TsudaKageyu/minhook)** - Biblioteca para hook de funções da API do Windows.
* **[Kiero](https://github.com/Rebzzel/kiero)** - Hook universal para interfaces gráficas (DirectX 11).
* **[ImGui](https://github.com/ocornut/imgui)** - Biblioteca para criação da interface de usuário (Overlay).
* **IL2CPP Interop** - Sistema para interação com o backend IL2CPP da Unity.

## 🤝 Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir issues relatando problemas ou pull requests com melhorias.

1.  Faça um Fork do projeto
2.  Crie sua Feature Branch (`git checkout -b feature/MinhaFeature`)
3.  Commit suas mudanças (`git commit -m 'Adicionando nova feature'`)
4.  Push para a Branch (`git push origin feature/MinhaFeature`)
5.  Abra um Pull Request

## 👤 Autor

* **maurydev** - *Desenvolvimento inicial* - [Perfil GitHub](https://github.com/MauryDev)

## 📝 Licença

Este projeto está licenciado sob a Licença MIT - veja o arquivo [LICENSE.txt](LICENSE.txt) para detalhes.