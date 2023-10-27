/*
 * Jose Barrera Ramos
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

#include "havingFunWithMatrices.h"
#include "matrizDispersa.h"

#include <iostream>
#include <vector>
#include <list>

using namespace std;

//void row(vector<vector<int>>& matriz, int valorUno, int valorDos, int tamMatriz) {
//}

//void col(vector<vector<int>>& matriz, int valorUno, int valorDos, int tamMatriz) {
//}

/**
 * @brief Se incrementa en 1 el valor de todas las posiciones de la matriz
 * @param matriz
 * @param tamMatriz
 * @note Complejidad O(n^2)
 */
void inc(vector<vector<int>>& matriz, int tamMatriz) {
    for (int i = 0; i < tamMatriz; i++) {             // n + 1
        for (int x = 0; x < tamMatriz; x++) {         // n * (n + 1)
            matriz[i][x] = (matriz[i][x] + 1) % 10;   // n * n
        }
    }
}

/**
 * @brief Se reduce en 1 el valor de todas las posiciones de la matriz
 * @param matriz
 * @param tamMatriz
 * @note Complejidad O(n^2)
 */
void dec(vector<vector<int>>& matriz, int tamMatriz) {
    for (int i = 0; i < tamMatriz; i++) {             // n + 1
        for (int x = 0; x < tamMatriz; x++) {         // n * (n + 1)
            matriz[i][x] = (matriz[i][x] + 9) % 10;   // n * n
        }
    }
}


//void transpose(vector<vector<int>>& matriz, int tamMatriz) {
//}