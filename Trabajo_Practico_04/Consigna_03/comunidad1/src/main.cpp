//============================================================================
// Name        : persona1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Persona.h"
#include "Fecha.h"
#include "Comunidad.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	Comunidad c;

	c.inputComunidad(1);
	c.showComunidad();

	return 0;
}
