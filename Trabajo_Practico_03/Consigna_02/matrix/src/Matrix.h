/*
 * Matrix.h
 *
 *  Created on: 6 abr. 2018
 *      Author: hp
 */

#ifndef MATRIX_H_
#define MATRIX_H_

class Matrix {
private:
	int columns;
	int rows;
	int* values;
public:
	Matrix();
	Matrix(int, int, int*);

	int getColumns() const;
	void setColumns(int columns);
	int getRows() const;
	void setRows(int rows);
	int* getValues() const;
	void setValues(int* values);

	void inputByArrayMethod();
	void inputByMemoryMethod();

	void showByArrayMethod();
	void showByMemoryMethod();

	//métodos que suman dos matrices
	Matrix addByArrayMethod(Matrix);
	Matrix addByMemoryMethod(Matrix);

	//métodos que multiplican dos matrices
	Matrix multiplyByArrayMethod(Matrix);
	Matrix multiplyByMemoryMethod(Matrix);
};

#endif /* MATRIX_H_ */
