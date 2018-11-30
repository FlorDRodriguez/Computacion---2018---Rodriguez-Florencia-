/*
 * Fecha.h
 *
 *  Created on: 11 may. 2018
 *      Author: hp
 */

#ifndef FECHA_H_
#define FECHA_H_

#include <string>
#include <iostream>

using namespace std;

class Fecha {
private:
	int dia;
	int mes;
	int anho;
public:
	Fecha();
	Fecha(int, int, int);

	int getAnho();
	void setAnho(int anio);
	int getDia();
	void setDia(int dia);
	int getMes();
	void setMes(int mes);

	void input();
	void show();

	string toString();//metodo para mostrar los datos y no las direcciones de memoria
};

#endif /* FECHA_H_ */
