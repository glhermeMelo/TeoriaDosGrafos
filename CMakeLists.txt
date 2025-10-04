cmake_minimum_required(VERSION 4.0)
project(TeoriaDosGrafos)

set(CMAKE_CXX_STANDARD 20)

add_executable(TeoriaDosGrafos
        main.cpp
        service/LeitorDeArquivo.cpp
        service/LeitorDeArquivo.h
        service/ImpressorDeMatriz.cpp
        service/ImpressorDeMatriz.h
        calculadora/FloydWarshall.cpp
        calculadora/FloydWarshall.h
        service/EscritorDeArquivo.cpp
        service/EscritorDeArquivo.h
)
