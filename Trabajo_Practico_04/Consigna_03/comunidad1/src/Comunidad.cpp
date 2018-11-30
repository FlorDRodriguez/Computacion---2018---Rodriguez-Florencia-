/*
 * Comunidad.cpp
 *
 *  Created on: 11 may. 2018
 *      Author: hp
 */

#include "Fecha.h"
#include "Persona.h"
#include "Comunidad.h"
#include <string>
#include <iostream>

using namespace std;

Comunidad::Comunidad() {
}

void Comunidad::inputComunidad(int size_personas) {
	this->personas = new Persona[size_personas];
	this->size_personas = size_personas;

	for(int i=0; i<size_personas ; i++) {
		cout<< "Persona nro "<< i+1<< endl;
		Persona* p = new Persona();
		p->imput();
		personas[i] = *p;
	}
}

void Comunidad::showComunidad() {
	Persona p;

	for(int i=0; i<this->size_personas ; i++) {
		cout<< "Persona nro "<< i+1<< endl;
		p = personas[i];
		p.show();
	}
}
