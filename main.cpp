/*
 * Jose Barrera Ramos
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

//Encabezados
#include "matrizDispersa.h"
#include "havingFunWithMatrices.h"
#include "matrizDispersaLista.h"

//Librerias
#include <iostream>
#include <vector>
#include <list>

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

        case 3: {
            //jugarMatrizLista();
            break;
        }

        default:
            cout << "Incorrecto" << endl;
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

    MatrizDispersa matrizDispersa(matriz);

    int numComandos;
    cin >> numComandos;
    string comandos;
    int valor1, valor2;

    while(numComandos--) {
        cin >> comandos;

        if (comandos == "row") {
            cin >> valor1 >> valor2;
            row(matrizDispersa, valor1, valor2);
        } else if (comandos == "col") {
            cin >> valor1, valor2;
            col(matrizDispersa, valor1, valor2);
        } else if (comandos == "inc") {
            inc(matrizDispersa);
        } else if (comandos == "dec") {
            dec(matrizDispersa);
        } else if (comandos == "transpose") {
            transpose(matrizDispersa);
        }
    }

    cout << "Case #" << num + 1;
    vector<vector<int>> matrizRebuild = matrizDispersa.rebuild();
    int tamMatrizDispersa = matrizRebuild.size();

    for (int i = 0; i < tamMatrizDispersa; i++) {
        for (int j = 0; j < tamMatrizDispersa; j++) {
            //cout <<
        }
    }
}

/**
 * @brief Operacion para comprobar los requerimientos de Matriz Dispersa (Formato Coordenado)
 * @note Complejidad O()
 */
void jugarMatriz() {
    int** matriz = new int*[3];
    for (int i = 0; i < 3; i++) {
        matriz[i] = new int[3];
    }

    int valor;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> valor;
            matriz[i][j] = valor;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << ", ";
        }
        cout << endl;
    }

    MatrizDispersa matrizDispersa(matriz);
    MatrizDispersa matrizTranspose(matrizDispersa.getTranspose());

    vector<vector<int>> transposeResult = matrizTranspose.rebuild();

    for(int i = 0; i < transposeResult.size(); i++) {
        for (int j = 0; j < transposeResult.size(); j++) {
            cout << transposeResult[i][j] << " ";
        }
        cout << endl;
    }
}