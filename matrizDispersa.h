/*
 * Jose Barrera Ramos
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

#ifndef PROYECTOESTRUCTURAS_MATRIZDISPERSA_H
#define PROYECTOESTRUCTURAS_MATRIZDISPERSA_H

//Librerias
#include <vector>
#include <list>
#include <string>

using namespace std;

/**
 * @class MatrizDispersa
 * @brief Clase para representar una Matriz Dispersa
 *
 * Esta matriz almacena una matriz dispersa en formato coordenado
 */
class MatrizDispersa {
private:
    //Formato Coordenado - Atributos
    vector<int> valores;  //Este vector contiene los valores de la matrizDispersa
    vector<int> filas;    //Este vector contiene las posiciones de las filas donde hay valores en la matrizDispersa
    vector<int> columnas; //Este vector contiene las posiciones de las columbas donde hay valores en la MatrizDispersa
public:
    // Constructores
    MatrizDispersa(vector<vector<int>>& fullMatrix);                       //Comprobado
    MatrizDispersa(list<list<int>>& fullMatrix);                           //Comprobado
    MatrizDispersa(MatrizDispersa& otro);

    // Operaciones
    vector<vector<int>> rebuild(int i, int j);
    int get(int i, int j);
    vector<int> getRow(int j);
    list<int> getRowList(int j);
    vector<int> getCol(int j);
    list<int> getColList(int j);
    vector<int> getDisperseRow(int j);
    list<int> getDisperseRowList(int j);
    vector<int> getDisperseCol(int j);
    list<int> getDisperseColList(int j);
    void assign(int i, int j, int value);
    void add(MatrizDispersa& otro);
    void printMatrix(string& separador);
    vector<int> productVector(vector<int>& vec);
    int getMax();                                                         //Comprobado
    MatrizDispersa getTranspose();
    static MatrizDispersa addMatrixList(list<MatrizDispersa>& matrices);

    // Sobrecarga de operadores
    MatrizDispersa operator+(MatrizDispersa& otro);                       //Por terminar
    MatrizDispersa operator*(MatrizDispersa& otro);                       //Por terminar
    bool operator==(MatrizDispersa& otro);                                //Por terminar
};

#endif //PROYECTOESTRUCTURAS_MATRIZDISPERSA_H