/*
 * Materia.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "Materia.h"
#include <sstream>

Materia::Materia() {
	nombre = "";
	carrera = "";
	curso = 0;
	profesor = "";
}

Materia::Materia(string nombre, string carrera, int curso, string profesor) {
	this->nombre = nombre;
	this->carrera = carrera;
	this->curso = curso;
	this->profesor = profesor;
}

string Materia::getCarrera() {
	return carrera;
}

void Materia::setCarrera(string carrera) {
	this->carrera = carrera;
}

int Materia::getCurso() {
	return curso;
}

void Materia::setCurso(int curso) {
	this->curso = curso;
}

string Materia::getNombre() {
	return nombre;
}

void Materia::setNombre(string nombre) {
	this->nombre = nombre;
}

string Materia::getProfesor() {
	return profesor;
}

void Materia::setProfesor(string profesor) {
	this->profesor = profesor;
}

string Materia::toString() {
	stringstream ss;

	ss << "Nombre: " << nombre << " - Carrera: " << carrera << " - Curso: " << curso << " - Profesor:" << profesor;

	return ss.str();
}

bool Materia::operator >(Materia m) {
	return this->nombre > m.nombre;
}

bool Materia::operator <=(Materia m) {
	return this->nombre <= m.nombre;
}

bool Materia::operator ==(Materia m) {
	return this->nombre == m.nombre;
}

bool Materia::operator !=(Materia m) {
	return this->nombre != m.nombre;
}
