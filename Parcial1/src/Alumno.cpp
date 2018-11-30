/*
 * Usuario.cpp
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#include "Alumno.h"
#include <sstream>

using namespace std;


Alumno::Alumno() {
	nombre = "";
	apellido = "";
	legajo = 0;
}

Alumno::Alumno(string nombre, string apellido, int legajo) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->legajo = legajo;
}

string Alumno::getApellido() {
	return apellido;
}

void Alumno::setApellido(string apellido) {
	this->apellido = apellido;
}

int Alumno::getLegajo() {
	return legajo;
}

void Alumno::setLegajo(int legajo) {
	this->legajo = legajo;
}

string Alumno::getNombre() {
	return nombre;
}

void Alumno::setNombre(string nombre) {
	this->nombre = nombre;
}

string Alumno::toString() {
	stringstream ss;

	ss << "Nombre: " << nombre << " - Apellido: " << apellido << " - Legajo: " << legajo;

	return ss.str();
}
