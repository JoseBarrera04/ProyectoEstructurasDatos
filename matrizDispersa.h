/*
 * Jose Barrera
 * Esteban Munoz
 */

#ifndef PROYECTOESTRUCTURAS_MATRIZDISPERSA_H
#define PROYECTOESTRUCTURAS_MATRIZDISPERSA_H

#include <vector>
#include <list>
#include <string>

using namespace std;

class MatrizDispersa {
private:
    //Formato Coordenado
    int valores;
    int filas;
    int columnas;
public:
    // Constructores
    MatrizDispersa(vector<vector<int>>& fullMatrix);
    MatrizDispersa(list<list<int>>& fullMatrix);
    MatrizDispersa(MatrizDispersa& otro);

    // Operaciones
    void rebuild();
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
    int getMax();
    MatrizDispersa getTranspose();
    static MatrizDispersa addMatrixList(list<MatrizDispersa>& matrices);

    // Sobrecarga de operadores
    MatrizDispersa operator+(MatrizDispersa& otro);
    MatrizDispersa operator*(MatrizDispersa& otro);
    bool operator==(MatrizDispersa& otro);
};

#endif //PROYECTOESTRUCTURAS_MATRIZDISPERSA_H