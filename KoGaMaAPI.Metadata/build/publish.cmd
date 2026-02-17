@echo off

IF "%1" NEQ "" (
	set ModeOutput=%1%

) ELSE (
	set ModeOutput=Release
)
set OutputDir=..\..\x64\%ModeOutput%
set OutputMetadataWWW=%OutputDir%\WWW
set OutputMetadataBR=%OutputDir%\BR
set OutputMetadataFriends=%OutputDir%\Friends
set ICalls=Tools.Il2Cpp.ICalls.dat
set KoGaMaAPI=KoGaMaAPI.KoGaMa.dat
set Il2CppGenerator="C:\dev\Visual Studio\Il2CppInteropCpp\GeneratorCode\bin\Release\net9.0\publish\GeneratorCode.exe"

mkdir "%OutputMetadataWWW%"
mkdir "%OutputMetadataBR%"
mkdir "%OutputMetadataFriends%"

copy "..\metadata\%ICalls%" "%OutputMetadataWWW%\%ICalls%"
copy "..\metadata\%KoGaMaAPI%" "%OutputMetadataWWW%\%KoGaMaAPI%"
%Il2CppGenerator% update WWW "%OutputMetadataWWW%\%ICalls%"
%Il2CppGenerator% update WWW "%OutputMetadataWWW%\%KoGaMaAPI%"
IF "%1" NEQ "Debug" (
	copy "..\metadata\%ICalls%" "%OutputMetadataBR%\%ICalls%"
	copy "..\metadata\%ICalls%" "%OutputMetadataFriends%\%ICalls%"
	copy "..\metadata\%KoGaMaAPI%" "%OutputMetadataBR%\%KoGaMaAPI%"
	copy "..\metadata\%KoGaMaAPI%" "%OutputMetadataFriends%\%KoGaMaAPI%"
	%Il2CppGenerator% update BR "%OutputMetadataWWW%\%ICalls%"
	%Il2CppGenerator% update BR "%OutputMetadataBR%\%KoGaMaAPI%"
	%Il2CppGenerator% update Friends "%OutputMetadataFriends%\%ICalls%"
	%Il2CppGenerator% update Friends "%OutputMetadataFriends%\%KoGaMaAPI%"
)
