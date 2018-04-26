//============================================================================
// Name        : persona1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Persona.h"
#include "Fecha.h"
#include <iostream>

using namespace std;

int main() {

	Persona c[10];
	for (int i=0; i<10; ++i){
		c[i].imput();
	}

	cout << "Comunidad: "  << endl;
	for (int i=0; i<10; ++i){
		cout<< c[i].getApellido()<< ", "<< c[i].getNombre()<< endl;
		cout<< c[i].getDni()<< "--->" << c[i].getNacimiento().getDia()
				<< "/"<< c[i].getNacimiento().getMes()<< c[i].getNacimiento().getAnho()<< endl;
	}

	return 0;
}
