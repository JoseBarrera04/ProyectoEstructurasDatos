/*
 * Jose Barrera Ramos
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

#ifndef PROYECTOESTRUCTURAS_MATRIZDISPERSALISTA_H
#define PROYECTOESTRUCTURAS_MATRIZDISPERSALISTA_H

//Librerias
#include <list>
#include <string>
#include <vector>

using namespace std;

class MatrizDispersaLista {
private:
    vector<list<int>> matrizDispersaLista;
public:
    //Constructores
    MatrizDispersaLista(int** matriz, int filas, int columnas);
    MatrizDispersaLista(list<list<int>>& fullMatrix);
    MatrizDispersaLista(MatrizDispersaLista& otro);

    //Operaciones

    // Sobrecarga de operadores
};

#endif //PROYECTOESTRUCTURAS_MATRIZDISPERSALISTA_H
