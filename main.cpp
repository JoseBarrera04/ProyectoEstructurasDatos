/*
 * Jose Barrera Ramos
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

#include "matrizDispersa.h"
#include "havingFunWithMatrices.h"

//Librerias
#include <iostream>
#include <vector>
//#include <list>

void jugarMatriz();

using namespace std;

int main() {
    int opcion = -1;
    cin >> opcion;

    switch (opcion) {
        case 1: {
            jugarMatriz();
            break;
        }

        case 2: {
            int numCasos;
            cin >> numCasos;

            for (int i = 0; i < numCasos; i++) {
                havingFunWithMatrices(i);
            }
            break;
        }

        default:
            cout << "xd";
            break;
    }

    return 0;
}

/**
 * @brief Operacion encargada de gestionar todas las acciones
 * @param num
 * @note Complejidad O()
 */
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

/**
 * @brief
 * @note Complejidad O()
 */
void jugarMatriz() {
    cout << "1.Vectores de Vectores" << endl;
    cout << "2.Listas de Listas" << endl;
    int opcion = -1;
    int tamMatriz;
    cin >> opcion;
    cin >> tamMatriz;

    switch (opcion) {
        case 1: {
            vector<vector<int>> matriz(tamMatriz, vector<int>(tamMatriz));
            int valor;

            for (int i = 0; i < tamMatriz; i++) {
                for (int x = 0; x < tamMatriz; x++) {
                    cin >> valor;
                    matriz[i][x] = valor;
                }
            }
            break;
        }

        case 2: {
            list<list<int>> matriz;
            int valor;

            for (int i = 0; i < tamMatriz; i++) {
                list<int> filaMatriz;
                for (int j = 0; j < tamMatriz; j++) {
                    cin >> valor;
                    filaMatriz.push_back(valor);
                }
                matriz.push_back(filaMatriz);
            }
            break;
        }

        default:
            cout << "xd" << endl;
            break;
    }
}