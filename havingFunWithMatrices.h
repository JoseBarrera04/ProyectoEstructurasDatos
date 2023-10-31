/*
 * Jose Barrera Ramos
 * Proyecto Estructura de Datos / Have Fun With Matrices
 */

#ifndef PROYECTOESTRUCTURAS_HAVINGFUNWITHMATRICES_H
#define PROYECTOESTRUCTURAS_HAVINGFUNWITHMATRICES_H

#include "matrizDispersa.h"
#include "matrizDispersaLista.h"

#include <vector>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

void havingFunWithMatrices(int num);
void row(MatrizDispersa& matrizDispersa, int valor1, int valor2);
void col(MatrizDispersa& matrizDispersa, int valor1, int valor2);
void inc(MatrizDispersa& matrizDispersa);
void dec(MatrizDispersa& matrizDispersa);
void transpose(MatrizDispersa& matrizDispersa);

#endif //PROYECTOESTRUCTURAS_HAVINGFUNWITHMATRICES_H
