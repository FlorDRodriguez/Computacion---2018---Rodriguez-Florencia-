/*
 * Fecha.cpp
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#include "Fecha.h"
#include <sstream>
Fecha::Fecha() {
	// TODO Auto-generated constructor stub
	dia = 01;
	mes = 01;
	anho = 1980;
}

Fecha::Fecha(int dia, int mes, int anho) {
	this->dia = dia;
	this->mes = mes;
	this->anho = anho;
}

int Fecha::getAnho() {
	return anho;
}

void Fecha::setAnho(int anho) {
	this->anho = anho;
}

int Fecha::getDia() {
	return dia;
}

void Fecha::setDia(int dia) {
	this->dia = dia;
}

int Fecha::getMes() {
	return mes;
}

void Fecha::setMes(int mes) {
	this->mes = mes;
}

string Fecha::toString() {
	stringstream ss;

	ss << dia << "/" << mes << "/" << anho << endl;

	return ss.str();
}
