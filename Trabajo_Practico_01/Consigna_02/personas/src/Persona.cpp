/*
 * Persona.cpp
 *
 *  Created on: 16 mar. 2018
 *      Author: hp
 */
#include "Persona.h"
#include <string>
#include <iostream>
using namespace std;

string Persona::getApellido() const {
	return apellido;
}

void Persona::setApellido(string apellido) {
	this->apellido = apellido;
}

long Persona::getDni() const {
	return dni;
}

void Persona::setDni(long dni) {
	this->dni = dni;
}

string Persona::getNombre() const {
	return nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

void Persona::imput() {
	cout<< "Ingrese su nombre: "<< endl;
	cin>> this->nombre;
	cout<< "Ingrese su apellido: "<< endl;
	cin>> this->apellido;
	cout<< "Ingrese su nro. de documento: "<< endl;
	cin>> this->dni;
}

void Persona::show() {
	cout<< this->apellido<< ", "<< this->nombre<< ": "<< this->dni<< endl;
}
