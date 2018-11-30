/*
 * Curso.cpp
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#include "Curso.h"

Curso::Curso() {
	alumnos = new Queue();
}

Queue* Curso::getAlumnos() {
	return alumnos;
}

void Curso::setAlumnos(Queue* alumnos) {
	this->alumnos = alumnos;
}

