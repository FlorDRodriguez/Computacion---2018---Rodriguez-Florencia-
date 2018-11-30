/*
 * Persona.cpp
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#include "Persona.h"

Persona::Persona() {
	dni = 0;
	apellido = "";
	nombre = "";
	nacimiento = new Fecha();
	legajo = 0;
}

Persona::Persona(long dni, string apellido, string nombre, Fecha* nacimiento, int legajo) {
	this-> dni = dni;
	this-> nombre = nombre;
	this-> apellido = apellido;
	this-> nacimiento = nacimiento;
	this-> legajo = legajo;
}

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

int Persona::getLegajo() {
	return legajo;
}

void Persona::setLegajo(int legajo) {
	this->legajo = legajo;
}

Fecha* Persona::getNacimiento() {
	return nacimiento;
}

void Persona::setNacimiento(Fecha* nacimiento) {
	this->nacimiento = nacimiento;
}

string Persona::getNombre() {
	return nombre;
}

void Persona::setNombre(string nombre) {
	this->nombre = nombre;
}

void Persona::input() {
	cout << "\n\n";
	cout << "Ingrese datos del alumno" << endl;
	cout << "DNI: ";
	cin >> this->dni;
	cin.ignore();
	cout << endl;
	cout << "Nombre: ";
	getline(cin, this->nombre);
	cout << endl;
	cout << "Apellido: ";
	getline(cin, this->apellido);
	cout << endl;
	cout << "Legajo: ";
	cin >> this->legajo;
	cin.ignore();
	cout << endl;
	cout << "Fecha de nacimiento: " << endl;
	this->nacimiento->input();
}

void Persona::show() {
	cout << "DNI: " << dni << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Apellido: " << apellido << endl;
	cout << "Legajo: " << legajo <<endl;
	nacimiento->show();
}

string Persona::toStringNacimiento() {
	return nacimiento->toString();
}
