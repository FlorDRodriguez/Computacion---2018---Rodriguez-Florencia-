/*
 * Persona.cpp
 *
 *  Created on: 28 mar. 2018
 *      Author: hp
 */
#include "Fecha.h"
#include "Persona.h"
#include <string>
#include <iostream>

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

Fecha Persona::getNacimiento() {
	return nacimiento;
}

void Persona::setNacimiento(Fecha nacimiento) {
	this->nacimiento = nacimiento;
}

string Persona::getNombre() {
	return nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

Persona::Persona() { //constructor vacio
	// TODO Auto-generated constructor stub
	nombre = " ";
	apellido = " ";
	dni = 0;
}

Persona::Persona(long dni, string apellido, string nombre, Fecha nacimiento) {
	this->dni = dni;
	this->apellido = apellido;
	this->nombre = nombre;
	this->nacimiento = nacimiento;
}

void Persona::imput() {
	cout<< "Ingrese su nombre: "<< endl;
	cin>> this->nombre;
	cout<< "Ingrese su apellido: "<< endl;
	cin>> this->apellido;
	cout<< "Ingrese su dni: "<< endl;
	cin>> this->dni;
	nacimiento.imput();
}

void Persona::show() {
	cout<< "Nombre, Apellido: "<< this->nombre<< ", "<< this->apellido<< endl;
	cout<< "Dni: "<< this->dni<< endl;
	nacimiento.show();
}
