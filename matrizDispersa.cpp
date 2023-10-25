//
// Created by Usuario on 20/10/2023.
//

#include "matrizDispersa.h"

#include <iostream>
#include <vector>
#include <list>

using namespace std;

MatrizDispersa::MatrizDispersa(vector<vector<int>> &fullMatrix) {
}

MatrizDispersa::MatrizDispersa(list<list<int>> &fullMatrix) {
}

MatrizDispersa::MatrizDispersa(MatrizDispersa &otro) {
}

void MatrizDispersa::rebuild() {
}

int MatrizDispersa::get(int i, int j) {
}

vector<int> MatrizDispersa::getRow(int j) {
}

list<int> MatrizDispersa::getRowList(int j) {
}

vector<int> MatrizDispersa::getCol(int j) {
}

list<int> MatrizDispersa::getColList(int j) {
}

vector<int> MatrizDispersa::getDisperseRow(int j) {
}

list<int> MatrizDispersa::getDisperseRowList(int j) {
}

vector<int> MatrizDispersa::getDisperseCol(int j) {
}

list<int> MatrizDispersa::getDisperseColList(int j) {
}

void MatrizDispersa::assign(int i, int j, int value) {
}

void MatrizDispersa::add(MatrizDispersa &otro) {
}

void MatrizDispersa::printMatrix(string &separador) {
}

vector<int> MatrizDispersa::productVector(vector<int> &vec) {
}

int MatrizDispersa::getMax() {
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