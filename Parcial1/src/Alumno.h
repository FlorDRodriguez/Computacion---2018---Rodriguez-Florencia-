/*
 * Alumno.h
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#include <iostream>
#include "Examen.h"

using namespace std;

class Alumno {
private:
	string nombre;
	string apellido;
	int legajo;
public:
	Alumno();
	Alumno(string, string, int);

	string getApellido();
	void setApellido(string apellido);
	int getLegajo();
	void setLegajo(int legajo);
	string getNombre();
	void setNombre(string nombre);

	string toString();
};

#endif /* ALUMNO_H_ */
