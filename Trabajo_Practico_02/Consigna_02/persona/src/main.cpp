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
#include <string>

using namespace std;

int main() {
	Fecha f1(06,05,1996);

	Persona p1(39533850, "Rodriguez", "Florencia", f1);

	cout<< p1.getApellido()<< ", "<< p1.getApellido()<< endl;
	cout<< p1.getDni()<< "---> "<< p1.getNacimiento().getDia()<< "/"
			<< p1.getNacimiento().getMes()<< "/"<< p1.getNacimiento().getAnho()<< endl;

	//-------------------------------------------------------------------------------------
	//Usando los metodos imput y show

	Persona p2;
	p2.imput();
	//p2.show();

	cout<< p2.getApellido()<< ", "<< p2.getApellido()<< endl;
	cout<< p2.getDni()<< "---> "<< p2.getNacimiento().getDia()<< "/"
			<< p2.getNacimiento().getMes()<< "/"<< p2.getNacimiento().getAnho()<< endl;

	return 0;
}
