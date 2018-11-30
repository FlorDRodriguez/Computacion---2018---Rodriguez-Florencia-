//============================================================================
// Name        : Parcial1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Archivo.h"
#include "Queue.h"

int main() {
	(new Archivo())->generate();
	Curso* curso = new Curso();
	(new Archivo())->read(curso);
	curso->getAlumnos()->show();
	return 0;
}
