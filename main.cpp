/*
 * Jose Barrera Ramos
 * Esteban
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

#include "matrizDispersa.h"

#include <iostream>
#include <vector>
#include <list>

using namespace std;

void havingFunWithMatrices(int num);
void row(vector<vector<int>>& matriz, int valorUno, int valorDos, int tamMatriz);
void col(vector<vector<int>>& matriz, int valorUno, int valorDos, int tamMatriz);
void inc(vector<vector<int>>& matriz, int tamMatriz);
void dec(vector<vector<int>>& matriz, int tamMatriz);
void transpose(vector<vector<int>>& matriz, int tamMatriz);

int main() {
    int numCasos;
    cin >> numCasos;

    for (int i = 0; i < numCasos; i++) {
        havingFunWithMatrices(i);
    }

    return 0;
}

void havingFunWithMatrices(int num) {
    int tamMatriz;
    cin >> tamMatriz;
    int valor;
    vector<vector<int>> matriz(tamMatriz, vector<int>(tamMatriz));

    for (int i = 0; i < tamMatriz; i++) {
        for (int x = 0; x < tamMatriz; x++) {
            cin >> valor;
            matriz[i][x] = valor;
        }
    }

    int numComandos;
    cin >> numComandos;
    string comandos;
    int valorUno;
    int valorDos;

    while(numComandos--) {
        cin >> comandos;

        if (comandos == "row") {
            cin >> valorUno >> valorDos;
            row(matriz, valorUno, valorDos, tamMatriz);
        } else if (comandos == "col") {
            cin >> valorUno >> valorDos;
            col(matriz, valorUno, valorDos, tamMatriz);
        } else if (comandos == "inc") {
            inc(matriz, tamMatriz);
        } else if (comandos == "dec") {
            dec(matriz, tamMatriz);
        } else if (comandos == "transpose") {
            transpose(matriz, tamMatriz);
        }
    }

    cout << "Case #" << num + 1 << endl;

    for (int i = 0; i < tamMatriz; i++) {
        for (int x = 0; x < tamMatriz; x++) {
            cout << matriz[i][x];
        }
        cout << endl;
    }
    cout << endl;
}

void row(vector<vector<int>>& matriz, int valorUno, int valorDos, int tamMatriz) {
}

void col(vector<vector<int>>& matriz, int valorUno, int valorDos, int tamMatriz) {
}

void inc(vector<vector<int>>& matriz, int tamMatriz) {
    for (int i = 0; i < tamMatriz; i++) {
        for (int x = 0; x < tamMatriz; x++) {
            matriz[i][x] = (matriz[i][x] + 1) % 10;
        }
    }
}

void dec(vector<vector<int>>& matriz, int tamMatriz) {
    for (int i = 0; i < tamMatriz; i++) {
        for (int x = 0; x < tamMatriz; x++) {
            matriz[i][x] = (matriz[i][x] + 9) % 10;
        }
    }
}


void transpose(vector<vector<int>>& matriz, int tamMatriz) {
}