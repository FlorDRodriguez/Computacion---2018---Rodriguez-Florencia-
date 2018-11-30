/*
 * Carrera.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "Carrera.h"

using namespace std;

Carrera::Carrera() {
	materias = new Lista();
}

Lista* Carrera::getMaterias() {
	return materias;
}

void Carrera::setMaterias(Lista* materias) {
	this->materias = materias;
}
