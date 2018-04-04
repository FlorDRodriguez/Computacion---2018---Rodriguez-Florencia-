/*
 * Comunidad.cpp
 *
 *  Created on: 28 mar. 2018
 *      Author: hp
 */
#include "Fecha.h"
#include "Persona.h"
#include "Comunidad.h"
#include <string>
#include <iostream>

using namespace std;

Persona Comunidad::getPersonas(){
	return personas;
}

Comunidad::Comunidad() {
	// TODO Auto-generated constructor stub
	//personas[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
}

void Comunidad::imput() {
	cout<< "Ingrese 10 personas: "<< endl;
	for (int i=0; i<10; ++i) {
		personas[i].imput();
	}
}

void Comunidad::show() {
	for (int i=0; i<10; ++i) {
		personas[i].show();
	}
}
