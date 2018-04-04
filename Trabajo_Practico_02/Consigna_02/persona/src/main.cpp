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

	for (int i=0; i<2; ++i) {
		Persona q[i];
		q[i].imput();

		cout << q[i].getNombre()<< ", "<< q[i].getApellido()<< "--->"<< q[i].getDni()<< endl;
		cout<< "Fecha de nacimiento: "<< q[i].getNacimiento().getDia()<< "/"<< q[i].getNacimiento().getMes()<<
				"/"<< q[i].getNacimiento().getAnho()<< endl;
	}

	return 0;

	return 0;
}


