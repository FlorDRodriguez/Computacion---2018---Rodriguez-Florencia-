/*
 * Fecha.h
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#ifndef FECHA_H_
#define FECHA_H_

#include <string>

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
	void setAnho(int anho);
	int getDia();
	void setDia(int dia);
	int getMes();
	void setMes(int mes);

	string toString();
};

#endif /* FECHA_H_ */
