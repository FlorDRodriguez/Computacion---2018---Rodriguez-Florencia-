//============================================================================
// Name        : Parcial2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Archivo.h"
#include "Lista.h"

using namespace std;

int main() {
	(new Archivo())->generate();
	Carrera* carrera = new Carrera();
	(new Archivo())->read(carrera);
	carrera->getMaterias()->show();
	return 0;
}
