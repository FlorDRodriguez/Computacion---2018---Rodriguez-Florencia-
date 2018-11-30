/*
 * Fecha.cpp
 *
 *  Created on: 22 mar. 2018
 *      Author: hp
 */

#include "Fecha.h"
#include <iostream>

using namespace std;

int Fecha::getAnho() const {
	return anho;
}

void Fecha::setAnho(int anio) {
	this->anho = anio;
}

int Fecha::getDia() const {
	return dia;
}

void Fecha::setDia(int dia) {
	this->dia = dia;
}

int Fecha::getMes() const {
	return mes;
}

void Fecha::setMes(int mes) {
	this->mes = mes;
}

Fecha::Fecha() { //constructor vacio
	// TODO Auto-generated constructor stub
	dia = 01;
	mes = 01;
	anho = 1980;
}

Fecha::Fecha(int dia, int mes, int anho) {//constructor sobrecargado
	this->dia = dia;
	this->mes = mes;
	this->anho = anho;
}

//implementacion de metodos
void Fecha::imput() {
	cout<< "Ingrese su anho de nacimiento"<< endl;
	cin>> this->anho;
	cout<< "Ingrese su mes de nacimiento"<< endl;
	cin>> this->mes;
	cout<< "Ingrese su dia de nacimiento"<< endl;
	cin>> this->dia;
}

void Fecha::show() {
	cout<< "Fecha de nacimiento: "<< this->dia<< "/"<< this->mes<< "/"<< this->anho<< endl;
}
