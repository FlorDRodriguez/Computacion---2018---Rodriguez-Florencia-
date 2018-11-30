//============================================================================
// Name        : matrix.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Matrix.h"
#include <iostream>

using namespace std;

int main() {
	Matrix m1, m2;

	m1.inputByArrayMethod();
	m1.showByArrayMethod();

	m2.inputByMemoryMethod();
	m2.showByMemoryMethod();

	//m1.addByArrayMethod(m2);

	m1.addByMemoryMethod(m2);
	return 0;
}
