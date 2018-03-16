/*
 * Persona.h
 *
 *  Created on: 16 mar. 2018
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
	string getApellido() const;
	void setApellido(string apellido);
	long getDni() const;
	void setDni(long dni);
	string getNombre() const;
	void setNombre(string nombre);

	void imput();
	void show();
};

#endif /* PERSONA_H_ */
