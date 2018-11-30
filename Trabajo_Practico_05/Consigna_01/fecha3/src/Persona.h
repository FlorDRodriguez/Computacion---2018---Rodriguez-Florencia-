/*
 * Persona.h
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
#include <string>
#include "Fecha.h"

using namespace std;

class Persona {
private:
	long dni;
	string apellido;
	string nombre;
	Fecha* nacimiento;
	int legajo;
public:
	Persona();
	Persona (long, string, string, Fecha*, int);

	string getApellido();
	void setApellido(string apellido);
	long getDni();
	void setDni(long dni);
	int getLegajo();
	void setLegajo(int legajo);
	Fecha* getNacimiento();
	void setNacimiento(Fecha* nacimiento);
	string getNombre();
	void setNombre(string nombre);

	void input();
	void show();

	string toStringNacimiento();
};

#endif /* PERSONA_H_ */
