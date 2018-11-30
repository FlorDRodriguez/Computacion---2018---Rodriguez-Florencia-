/*
 * Matrix.cpp
 *
 *  Created on: 6 abr. 2018
 *      Author: hp
 */

#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix() {
	// TODO Auto-generated constructor stub
	columns = 0;
	rows = 0;
	values = 0;
}

Matrix::Matrix(int columns, int rows, int* values) {
	this->columns = columns;
	this->rows = rows;
	this->values = values;
}

int Matrix::getColumns() const {
	return columns;
}

void Matrix::setColumns(int columns) {
	this->columns = columns;
}

int Matrix::getRows() const {
	return rows;
}

void Matrix::setRows(int rows) {
	this->rows = rows;
}

int* Matrix::getValues() const {
	return values;
}

void Matrix::setValues(int* values) {
	this->values = values;
}

//Con notacion de arreglos
void Matrix::inputByArrayMethod() {
	cout << "Ingrese cantidad de filas: ";
	cin >> rows;
	cout << "Ingrese cantidad de columnas: ";
	cin >> columns;

	values = new int(rows*columns);
	int x;
	for (int i=0; i<rows; ++i) {
		for (int j=0; j<columns; ++j) {
			cout << "Ingrese el valor[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> x;
			values[i * columns + j] = x;
		}
	}
}

void Matrix::showByArrayMethod() {
	for (int i=0; i<rows; ++i) {
		for (int j=0; j<columns; ++j) {
			cout << "valor[" << i + 1 << "][" << j + 1 << "]: ";
			cout << values[i * columns + j] << endl;
		}

	}
}

Matrix Matrix::addByArrayMethod(Matrix matrix) {
	Matrix aux;
	for (int i=0; i<rows; ++i) {
		cout << "Entró al 1er for" << endl;
		for (int j=0 ; j<columns ; ++j) {
			cout << "Entró al 2do for" << endl;
			aux.values[i * aux.columns + j] = values[i * columns + j] + matrix.values[i * matrix.columns + j];
		}
	}
	for (int i=0; i<rows; ++i) {
		cout << "Entró al 1er for" << endl;
		for (int j=0; j<columns; ++j) {
			cout << "Entró al 2do for" << endl;
			cout << "valor[" << i + 1 << "][" << j + 1 << "]: ";
			cout << aux.values[i * aux.columns + j] << endl;
		}
	}
}

Matrix Matrix::multiplyByArrayMethod(Matrix matrix) {
	Matrix aux;
		for (int i=0; i<rows; ++i) {
			cout << "Entró al 1er for" << endl;
			for (int j=0 ; j<columns ; ++j) {
				cout << "Entró al 2do for" << endl;
				aux.values[i * aux.columns + j] = values[i * columns + j] + matrix.values[i * matrix.columns + j];
			}
		}
		for (int i=0; i<rows; ++i) {
			cout << "Entró al 1er for" << endl;
			for (int j=0; j<columns; ++j) {
				cout << "Entró al 2do for" << endl;
				cout << "valor[" << i + 1 << "][" << j + 1 << "]: ";
				cout << aux.values[i * aux.columns + j] << endl;
			}
		}
	}



//Con aritmetica de punteros
void Matrix::inputByMemoryMethod() {
	cout << "Ingrese cantidad de filas: ";
	cin >> rows;
	cout << "Ingrese cantidad de columnas: ";
	cin >> columns;

	values = new int(rows*columns);
	int x;
	for (int i=0; i<rows; ++i) {
		for (int j=0; j<columns; ++j) {
			cout << "Ingrese el valor[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> x;
			*(values + (i * columns + j)) = x;
		}
	}
}

void Matrix::showByMemoryMethod() {
	for (int i=0; i<rows; ++i) {
		for (int j=0; j<columns; ++j) {
			cout << "valor[" << i + 1 << "][" << j + 1 << "]: ";
			cout << *(values + (i * columns + j)) << endl;
		}
	}
}

Matrix Matrix::addByMemoryMethod(Matrix matrix) {
	Matrix aux;
	for (int i=0; i<rows; ++i) {
		cout << "Entró al 1er for" << endl;
		for (int j=0 ; j<columns ; ++j) {
			cout << "Entró al 2do for" << endl;
			aux.values[i * aux.columns + j] = values[i * columns + j] + matrix.values[i * matrix.columns + j];
		}
	}
	for (int i=0; i<rows; ++i) {
		for (int j=0; j<columns; ++j) {
			cout << "valor[" << i + 1 << "][" << j + 1 << "]: ";
			cout << aux.values[i * aux.columns + j] << endl;
		}
	}
}

//Matrix Matrix::multiplyByMemoryMethod(Matrix matrix) {}
