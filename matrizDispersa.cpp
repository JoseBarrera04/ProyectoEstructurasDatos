/*
 * Jose Barrera Ramos
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

#include "matrizDispersa.h"

//Librerias
#include <vector>
#include <list>
#include <iostream>

using namespace std;

/**
 * @brief
 * @param fullMatrix
 * @note Complejidad O()
 */
MatrizDispersa::MatrizDispersa(vector<vector<int>> &fullMatrix) {
    for (int i = 0; i < fullMatrix.size(); i++) {
        for (int j = 0; j < fullMatrix[i].size(); j++) {
            if (fullMatrix[i][j] != 0) {
                valores.push_back(fullMatrix[i][j]);
                filas.push_back(i);
                columnas.push_back(j);
            }
        }
    }

    filasOriginal = fullMatrix.size();
    columnasOriginal = fullMatrix[0].size();

}

/**
 * @brief
 * @param matriz
 * @note Complejidad O()
 */
MatrizDispersa::MatrizDispersa(int** &matriz) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] != 0) {
                valores.push_back(matriz[i][j]);
                filas.push_back(i);
                columnas.push_back(j);
            }
        }
    }

    filasOriginal = 3;
    columnasOriginal = 3;
}

/**
 * @brief
 * @param otro
 */
MatrizDispersa::MatrizDispersa(MatrizDispersa &otro) {
    this->valores = otro.valores;
    this->filas = otro.filas;
    this->columnas = otro.columnas;
}

vector<vector<int>> MatrizDispersa::rebuild() {
    vector<vector<int>> fullMatrix(filasOriginal, vector<int>(columnasOriginal, 0));
    for (int k = 0; k < filas.size(); k++) {
        fullMatrix[filas[k]][columnas[k]] = valores[k];
    }
    return fullMatrix;
}

/**
 * @brief Obtiene el valor de la posicion (i, j) de la matriz
 * @param i La fila de la posicion
 * @param j La columna de la posicion
 * @return El valor de la posicion (i, j)
 * @return Devuelve 0 en caso de no obtener el valor de la posicion (i, j)
 * @note Complejidad O()
 */
int MatrizDispersa::get(int i, int j) {
    int ans = 0;
    for (int k = 0; k < filas.size(); k++) {
        if (filas[k] == i && columnas[k] == j) {
            ans = valores[k];
        }
    }
    return ans;
}

/**
 * @brief
 * @param j
 * @return
 * @note Complejidad O()
 */
vector<int> MatrizDispersa::getRow(int j) {
    vector<int> row;
    for (int k = 0; k < filas.size(); k++) {
        if (filas[k] == j) {
            row.push_back(valores[k]);
        }
    }
    return row;
}

list<int> MatrizDispersa::getRowList(int j) {
    list<int> row;
    for (int k = 0; k < filas.size(); k++) {
        if (filas[k] == j) {
            row.push_back(valores[k]);
        }
    }
    return row;
}

vector<int> MatrizDispersa::getCol(int j) {
    vector<int> col;
    for (int k = 0; k < columnas.size(); k++) {
        if (columnas[k] == j) {
            col.push_back(valores[k]);
        }
    }
    return col;
}

list<int> MatrizDispersa::getColList(int j) {
    list<int> col;
    for (int k = 0; k < columnas.size(); k++) {
        if (columnas[k] == j) {
            col.push_back(valores[k]);
        }
    }
    return col;
}

vector<int> MatrizDispersa::getDisperseRow(int j) {
    vector<int> resultado;
    //vector<vector<int>> fullMatriz = rebuild();

    for (int i = 0; i < filasOriginal; i++) {
        if (filas[i] == j) {
            resultado.push_back(valores[i]);
        } else {
            resultado.push_back(0);
        }
    }

    return resultado;
}

list<int> MatrizDispersa::getDisperseRowList(int j) {
}

vector<int> MatrizDispersa::getDisperseCol(int j) {
    vector<int> resultado;
    //vector<vector<int>> fullMatriz = rebuild();

    for (int i = 0; i < columnasOriginal; i++) {
        if (columnas[i] == j) {
            resultado.push_back(valores[i]);
        } else {
            resultado.push_back(0);
        }
    }

    return resultado;
}

list<int> MatrizDispersa::getDisperseColList(int j) {
}

/**
 * @brief
 * @param i
 * @param j
 * @param value
 * @note Complejidad O()
 */
void MatrizDispersa::assign(int i, int j, int value) {
    for (int k = 0; k < filas.size(); k++) {
        if (filas[k] == i && columnas[k] == j) {
            if (value == 0) {
                valores.erase(valores.begin() + k);
                filas.erase(filas.begin() + k);
                columnas.erase(columnas.begin() + k);
            } else {
                valores[k] = value;
            }
            return;
        }
    }


    if (value != 0) {
        valores.push_back(value);
        filas.push_back(i);
        columnas.push_back(j);
    }
}

/**
 * @brief
 * @param otro
 * @note Complejidad O()
 */
void MatrizDispersa::add(MatrizDispersa &otro) {
    for (int k = 0; k < otro.filas.size(); k++) {
        int i = otro.filas[k];
        int j = otro.columnas[k];
        int value = get(i, j) + otro.valores[k];
        assign(i, j, value);
    }
}

/**
 * @brief
 * @param separador
 * @note Complejidad O()
 */
void MatrizDispersa::printMatrix(string separador) {
    for (int i = 0; i < valores.size(); i++) {
        if (i + 1 != valores.size()) {
            cout << valores[i] << separador;
        } else {
            cout << valores[i] << endl;
        }
    }
}

vector<int> MatrizDispersa::productVector(vector<int> &vec) {
}

/**
 * @brief
 * @return
 * @note Complejidad O(n)
 */
int MatrizDispersa::getMax() {
    int resultado = 1;                                                  // 1

    for (int i = 0; i < valores.size(); i++) {                          // n + 1
        resultado = (valores[i] > resultado) ? valores[i] : resultado;  // n
    }

    return resultado;                                                   // 1
}

MatrizDispersa MatrizDispersa::getTranspose() {
    vector<vector<int>> matrizTranspose(filasOriginal, vector<int>(filasOriginal, 0));
    vector<vector<int>> matrizRebuild = rebuild();
    for (int i = 0; i < filasOriginal; i++) {
        for (int j = 0; j < columnasOriginal; j++) {
            matrizTranspose[j][i] = matrizRebuild[i][j];
        }
    }

    MatrizDispersa resultadoTranspose(matrizTranspose);
    return resultadoTranspose;
}

MatrizDispersa MatrizDispersa::addMatrixList(list<MatrizDispersa> &matrices) {
}

MatrizDispersa MatrizDispersa::operator+(MatrizDispersa &otro) {
    vector<vector<int>> matriz = rebuild();
    vector<vector<int>> otraMatriz = otro.rebuild();

    int tamano = (filasOriginal > otro.filasOriginal) ? filasOriginal : otro.filasOriginal;

    vector<vector<int>> sumaMatriz(tamano, vector<int>(tamano, 0));

    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz.size(); j++) {
            sumaMatriz[i][j] += matriz[i][j];
        }
    }

    for (int i = 0; i < otraMatriz.size(); i++) {
        for (int j = 0; j < otraMatriz.size(); j++) {
            sumaMatriz[i][j] += otraMatriz[i][j];
        }
    }

    MatrizDispersa sumaMatrizDispersa(sumaMatriz);

    return sumaMatrizDispersa;
}

MatrizDispersa MatrizDispersa::operator*(MatrizDispersa &otro) {

}

bool MatrizDispersa::operator==(MatrizDispersa &otro) {
}