/*
 * Fecha.cpp
 *
 *  Created on: 11 may. 2018
 *      Author: hp
 */

#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include "Fecha.h"

using namespace std;

Fecha::Fecha() {
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

void Fecha::setAnho(int anio) {
	this->anho = anio;
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

void Fecha::input() {
	cout << "Dia: ";
	cin >> this->dia;
	cout << "Mes: ";
	cin >> this->mes;
	cout << "Año: ";
	cin >> this->anho;
}

void Fecha::show() {
	 cout << dia << "/" << mes << "/" << anho << endl;
}

string Fecha::toString() {
	stringstream d,m,a;

	d << this->dia;
	m << this->mes;
	a << this->anho;

	string newStringd = d.str();
	string newStringm = m.str();
	string newStringa = a.str();

	return newStringd + "/" + newStringm + "/" + newStringa;
}
