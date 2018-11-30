/*
 * Persona.h
 *
 *  Created on: 24 oct. 2018
 *      Author: hp
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>

using namespace std;

class Persona {
private:
	long dni;
	string apellido;
	string nombre;
public:
	string getApellido();
	void setApellido(string apellido);
	long getDni();
	void setDni(long dni);
	string getNombre();
	void setNombre(string nombre);

	void imput();
	void show();
};

#endif /* PERSONA_H_ */
