/*
 * Jose Barrera Ramos
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

//Encabezados
#include "havingFunWithMatrices.h"
#include "matrizDispersa.h"
#include "matrizDispersaLista.h"

//Librerias
#include <iostream>
#include <vector>
#include <list>

using namespace std;

void row(MatrizDispersa& matrizDispersa, int valor1, int valor2) {
    vector<vector<int>> matrizActualizada = matrizDispersa.rebuild();

    if(valor1 < matrizActualizada.size() && valor2 < matrizActualizada.size()) {
        vector<int> temp = matrizActualizada[valor1];
        for (int i = 0; i < matrizActualizada.size(); i++) {
            matrizActualizada[valor1][i] = matrizActualizada[valor2][i];
            matrizActualizada[valor2][i] = temp[i];
        }
        actualizarMatriz(matrizDispersa, matrizActualizada);
    }
}

void col(MatrizDispersa& matrizDispersa, int valor1, int valor2) {
    vector<vector<int>> matrizActualizada = matrizDispersa.rebuild();

    if(valor1 < matrizActualizada.size() && valor2 < matrizActualizada.size()) {
        for (int i = 0; i < matrizActualizada.size(); i++) {
            int temp = matrizActualizada[i][valor1];
            matrizActualizada[i][valor1] = matrizActualizada[i][valor2];
            matrizActualizada[i][valor2] = temp;
        }
        actualizarMatriz(matrizDispersa, matrizActualizada);
    }
}

void inc(MatrizDispersa& matrizDispersa) {
    vector<vector<int>> matrizActualizada = matrizDispersa.rebuild();
    int tamMatriz = matrizActualizada.size();
    for (int i = 0; i < tamMatriz; i++) {
        for (int j = 0; j < tamMatriz; j++) {
            matrizActualizada[i][j] += 1;
            matrizActualizada[i][j] = (matrizActualizada[i][j] == 10) ? 0 : matrizActualizada[i][j];
        }
    }

    actualizarMatriz(matrizDispersa, matrizActualizada);
}

void dec(MatrizDispersa& matrizDispersa) {
    vector<vector<int>> matrizActualizada = matrizDispersa.rebuild();
    int tamMatriz = matrizActualizada.size();
    for (int i = 0; i < tamMatriz; i++) {
        for (int j = 0; j < tamMatriz; j++) {
            matrizActualizada[i][j] -= 1;
            matrizActualizada[i][j] = (matrizActualizada[i][j] == -1) ? 10 : matrizActualizada[i][j];
        }
    }

    actualizarMatriz(matrizDispersa, matrizActualizada);
}

void transpose(MatrizDispersa& matrizDispersa) {
    MatrizDispersa matrizActualizada = matrizDispersa.getTranspose();
    matrizDispersa = matrizActualizada;
}

void actualizarMatriz(MatrizDispersa& original, vector<vector<int>>& nuevaMatriz) {
    MatrizDispersa nuevaMatrizDispersa(nuevaMatriz);
    original = nuevaMatrizDispersa;
}