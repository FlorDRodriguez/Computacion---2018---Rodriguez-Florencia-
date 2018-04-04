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
	Persona p1;

	//p1.imput();
	//p1.show();


	Persona p2;

	cout<< "Nombre, Apellido: "<< p2.getNombre()<< ", "<< p2.getApellido()<< endl;
	cout<< "Dni: "<< p2.getDni()<< endl;
	p2.getNacimiento();


	/*Persona p3(39533850,Rodriguez,Flor,06,05,1996);

	cout<< "Nombre, Apellido: "<< p3.getNombre()<< ", "<< p3.getApellido()<< endl;
	cout<< "Dni: "<< p3.getDni()<< endl;
	p3.getNacimiento();
	*/

	return 0;
}


