cmake_minimum_required(VERSION 3.26)
project(ProyectoEstructuras)

set(CMAKE_CXX_STANDARD 17)

add_executable(ProyectoEstructuras main.cpp
        matrizDispersa.cpp
        matrizDispersa.h
        havingFunWithMatrices.h
        havingFunWithMatrices.cpp
        matrizDispersaLista.cpp
        matrizDispersaLista.h)
