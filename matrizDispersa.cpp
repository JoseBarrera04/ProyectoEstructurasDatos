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

}

/**
 * @brief
 * @param fullMatrix
 * @note Complejidad O()
 */
MatrizDispersa::MatrizDispersa(list<list<int>> &fullMatrix) {
    int i = 0;
    for (list<int>& row : fullMatrix) {
        int j = 0;
        for (int value : row) {
            if (value != 0) {
                valores.push_back(value);
                filas.push_back(i);
                columnas.push_back(j);
            }
            j++;
        }
        i++;
    }
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

vector<vector<int>> MatrizDispersa::rebuild(int i, int j) {
    vector<vector<int>> fullMatrix(i, vector<int>(j, 0));
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
}

list<int> MatrizDispersa::getDisperseRowList(int j) {
}

vector<int> MatrizDispersa::getDisperseCol(int j) {
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

void MatrizDispersa::add(MatrizDispersa &otro) {
    for (int k = 0; k < otro.filas.size(); k++) {
        int i = otro.filas[k];
        int j = otro.columnas[k];
        int value = get(i, j) + otro.valores[k];
        assign(i, j, value);
    }
}

void MatrizDispersa::printMatrix(string &separador) {
    for (int i = 0; i < valores.size(); i++) {
        cout << valores[i] << ", " << endl;
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
}

MatrizDispersa MatrizDispersa::addMatrixList(list<MatrizDispersa> &matrices) {
}

MatrizDispersa MatrizDispersa::operator+(MatrizDispersa &otro) {
}

MatrizDispersa MatrizDispersa::operator*(MatrizDispersa &otro) {
}

bool MatrizDispersa::operator==(MatrizDispersa &otro) {
}