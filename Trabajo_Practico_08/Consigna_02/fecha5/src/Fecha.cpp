/*
 * Fecha.cpp
 *
 *  Created on: 25 oct. 2018
 *      Author: hp
 */

#include "Fecha.h"
#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
#include <stdlib.h>

using namespace std;

Fecha::Fecha(){
	// TODO Auto-generated constructor stub
	dia = 1;
	mes = 1;
	anho = 1980;
}

Fecha::Fecha(int dia, int mes, int anho)
{
    this-> dia = dia;
    this-> mes = mes;
    this-> anho = anho;
}

void Fecha::setDia(int dia){
    this-> dia = dia;
}

int Fecha::getDia() const{
    return dia;
}

int Fecha::getMes() const{
    return mes;
}

void Fecha::setMes(int mes){
    this-> mes = mes;
}

void Fecha::setAnho(int anho){
    this-> anho = anho;
}

int Fecha::getAnho() const{
    return anho;
}

void Fecha::input() {
	cout << "  Ingrese dia: ";
	cin >> this->dia;
	cout << "  Ingrese mes: ";
	cin >> this->mes;
	cout << "  Ingrese año: ";
	cin >> this->anho;
}

void Fecha::show(){
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
		//return this->nombre + " " + this->apellido;
}

bool Fecha::operator >(Fecha fecha) {
	return this->anho > fecha.anho;
}

bool Fecha::operator <=(Fecha fecha) {
	return this->anho <= fecha.anho;
}

bool Fecha::operator ==(Fecha fecha) {
	return this->anho == fecha.anho;
}

bool Fecha::operator !=(Fecha fecha) {
	return this->anho != fecha.anho;
}
