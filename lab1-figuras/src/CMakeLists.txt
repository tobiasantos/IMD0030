cmake_minimum_required(VERSION 3.5)
project(Lab VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-Wall")

# Lista de arquivos de origem
# Configurar o diretório onde estão os arquivos-fonte do projeto
include_directories( ../include )
set(SOURCES
    main.cpp
    circulo.cpp
    cubo.cpp
    esfera.cpp
    paralelepipedo.cpp
    piramide.cpp
    quadrado.cpp
    retangulo.cpp
    triangulo.cpp
)

# Adiciona um executável
add_executable(geometria ${SOURCES})