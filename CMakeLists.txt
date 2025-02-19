cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(Controle_De_Estoque)

# Definição do padrão C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Adiciona todos os arquivos .cpp nas libsBack e libsFront automaticamente
file(GLOB LIBS_BACK "libsBack/*.cpp")
file(GLOB LIBS_FRONT "libsFront/*.cpp")

# Adiciona o executável principal com os arquivos das libs
add_executable(Estocom conEst.cpp ${LIBS_BACK} ${LIBS_FRONT})

# Inclui os diretórios de cabeçalhos
include_directories(libsBack libsFront)
