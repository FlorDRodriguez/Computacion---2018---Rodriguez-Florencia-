//============================================================================
// Name        : fecha.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Fecha.h"
#include <iostream>

using namespace std;

int main() {
	Fecha f1;
	cout<< "Constructor vacio: "<< f1.getDia()<< "/"<< f1.getMes()<< "/"<< f1.getAnho()<< endl;

	Fecha f2;
	f2.imput();
	f2.show();
	cout<< "Constructor sobrecargado: "<< f2.getDia()<< "/"<< f2.getMes()<< "/"<< f2.getAnho()<< endl;

	if (f1 < f2){
		cout<< f1.getDia()<< "/"<< f1.getMes()<< "/"<< f1.getAnho()<< " es menor a "<< f2.getDia()<< "/"<< f2.getMes()<< "/"<< f2.getAnho()<< endl;
	}
	if (f1 > f2){
		cout<< f1.getDia()<< "/"<< f1.getMes()<< "/"<< f1.getAnho()<< " es mayor a "<< f2.getDia()<< "/"<< f2.getMes()<< "/"<< f2.getAnho()<< endl;
	}
	if (f1 <= f2){
		cout<< f1.getDia()<< "/"<< f1.getMes()<< "/"<< f1.getAnho()<< " es menor o igual a "<< f2.getDia()<< "/"<< f2.getMes()<< "/"<< f2.getAnho()<< endl;
	}
	if (f1 > f2){
		cout<< f1.getDia()<< "/"<< f1.getMes()<< "/"<< f1.getAnho()<< " es mayor o igual a "<< f2.getDia()<< "/"<< f2.getMes()<< "/"<< f2.getAnho()<< endl;
	}
	if (f1 == f2){
		cout<< f1.getDia()<< "/"<< f1.getMes()<< "/"<< f1.getAnho()<< " es igual a "<< f2.getDia()<< "/"<< f2.getMes()<< "/"<< f2.getAnho()<< endl;
	}
	if (f1 != f2){
		cout<< f1.getDia()<< "/"<< f1.getMes()<< "/"<< f1.getAnho()<< " es diferente a "<< f2.getDia()<< "/"<< f2.getMes()<< "/"<< f2.getAnho()<< endl;
	}

	f2 += 100;
	cout<< "Sumandole 100 dias: "<< f2.getDia()<< "/" <<f2.getMes() <<"/" <<f2.getAnho() <<endl;
	return 0;
}
