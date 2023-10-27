/*
 * Jose Barrera Ramos
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

#ifndef PROYECTOESTRUCTURAS_HAVINGFUNWITHMATRICES_H
#define PROYECTOESTRUCTURAS_HAVINGFUNWITHMATRICES_H

#include <vector>
#include <iostream>
#include <list>

void havingFunWithMatrices(int num);
void row(vector<vector<int>>& matriz, int valorUno, int valorDos, int tamMatriz);
void col(vector<vector<int>>& matriz, int valorUno, int valorDos, int tamMatriz);
void inc(vector<vector<int>>& matriz, int tamMatriz);
void dec(vector<vector<int>>& matriz, int tamMatriz);
void transpose(vector<vector<int>>& matriz, int tamMatriz);

#endif //PROYECTOESTRUCTURAS_HAVINGFUNWITHMATRICES_H
