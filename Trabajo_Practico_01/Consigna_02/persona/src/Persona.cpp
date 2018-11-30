/*
 * Persona.cpp
 *
 *  Created on: 24 oct. 2018
 *      Author: hp
 */

#include "Persona.h"
#include <iostream>
#include <string>

using namespace std;

string Persona::getApellido() {
	return apellido;
}

void Persona::setApellido(string apellido) {
	this->apellido = apellido;
}

long Persona::getDni() {
	return dni;
}

void Persona::setDni(long dni) {
	this->dni = dni;
}

string Persona::getNombre() {
	return nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

void Persona::imput() {
	cout<< "Ingrese nombre: "<< endl;
	cin>> this->nombre;
	cout<< "Ingrese apellido: "<< endl;
	cin>> this->apellido;
	cout<< "Ingrese dni: "<< endl;
	cin>> this->dni;
}

void Persona::show() {
	cout<< this->nombre<< ", "<< this->apellido<< "-> "<< this->dni<< endl;
}
