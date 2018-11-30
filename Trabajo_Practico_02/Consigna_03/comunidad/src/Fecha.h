/*
 * Fecha.h
 *
 *  Created on: 22 mar. 2018
 *      Author: hp
 */

#ifndef FECHA_H_
#define FECHA_H_

#include <iostream>

using namespace std;

class Fecha {
private:
	int dia;
	int mes;
	int anho;
public:
	//getter and setter
	int getAnho() const;
	void setAnho(int anio);
	int getDia() const;
	void setDia(int dia);
	int getMes() const;
	void setMes(int mes);

	Fecha();//constructor vacio
	Fecha(int, int, int);//constructor sobrecargado

	//metodos que pide
	void imput();
	void show();
};

#endif /* FECHA_H_ */
