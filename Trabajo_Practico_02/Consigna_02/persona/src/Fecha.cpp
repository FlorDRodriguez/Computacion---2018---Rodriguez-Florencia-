/*
 * Fecha.cpp
 *
 *  Created on: 24 oct. 2018
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

bool Fecha::operator<(Fecha fecha) {
	if (anho < fecha.anho){
		return true;
	}
	if (anho > fecha.anho){
		return false;
	}
	if (mes < fecha.mes){
		return true;
	}
	if (mes > fecha.mes){
		return false;
	}
	if (dia < fecha.dia){
		return true;
	}
	if (dia > fecha.dia){
		return false;
	}
}

bool Fecha::operator>(Fecha fecha) {
	if (anho < fecha.anho){
		return false;
	}
	if (anho > fecha.anho){
		return true;
	}
	if (mes < fecha.mes){
		return false;
	}
	if (mes > fecha.mes){
		return true;
	}
	if (dia < fecha.dia){
		return false;
	}
	if (dia > fecha.dia){
		return true;
	}
}

bool Fecha::operator<=(Fecha fecha) {
	if (anho <= fecha.anho){
		return true;
	}
	if (anho >= fecha.anho){
		return false;
	}
	if (mes <= fecha.mes){
		return true;
	}
	if (mes >= fecha.mes){
		return false;
	}
	if (dia <= fecha.dia){
		return true;
	}
	if (dia >= fecha.dia){
		return false;
	}
}

bool Fecha::operator>=(Fecha fecha) {
	if (anho <= fecha.anho){
		return false;
	}
	if (anho >= fecha.anho){
		return true;
	}
	if (mes <= fecha.mes){
		return false;
	}
	if (mes >= fecha.mes){
		return true;
	}
	if (dia <= fecha.dia){
		return false;
	}
	if (dia >= fecha.dia){
		return true;
	}
}

bool Fecha::operator==(Fecha fecha) {
	if (anho == fecha.anho){
		return true;
	}
	if (anho != fecha.anho){
		return false;
	}
}

bool Fecha::operator!=(Fecha fecha) {
	if (anho == fecha.anho){
		return false;
	}
	if (anho != fecha.anho){
		return true;
	}
}

Fecha Fecha::operator+=(int dias) {//cambie int1 por dias para que sea mas explicativo

	int diasmes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

	dia += dias;

	while(dia > diasmes[mes - 1]){
		if (mes == 2){
			if(dia > 28){
				mes++;
				dia -= 28;
			}
		}

		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
			if (dia > 31){
				mes++;
				dia -= 31;
			}
		}

		if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
				if (dia > 30){
					mes++;
					dia -= 30;
				}
		}

		if(mes > 12){
			mes -= 12;
			anho++;
		}
	}
}

