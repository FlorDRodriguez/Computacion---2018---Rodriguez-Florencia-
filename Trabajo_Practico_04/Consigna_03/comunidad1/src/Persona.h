/*
 * Persona.h
 *
 *  Created on: 28 mar. 2018
 *      Author: hp
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include "Fecha.h"
#include <string>

using namespace std;

class Persona {
private:
	long dni;
	string apellido;
	string nombre;
	Fecha nacimiento;
public:
	string getApellido();
	void setApellido(string apellido);
	long getDni();
	void setDni(long dni);
	Fecha getNacimiento();
	void setNacimiento(Fecha nacimiento);
	string getNombre();
	void setNombre(string nombre);

	Persona();
	Persona(long, string, string, Fecha);

	void imput();
	void show();
};

#endif /* PERSONA_H_ */
