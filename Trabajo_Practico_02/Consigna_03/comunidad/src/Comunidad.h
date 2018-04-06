/*
 * Comunidad.h
 *
 *  Created on: 28 mar. 2018
 *      Author: hp
 */

#ifndef COMUNIDAD_H_
#define COMUNIDAD_H_

#include "Persona.h"
#include "Fecha.h"
#include <string>

using namespace std;

class Comunidad {
private:
	Persona personas[10];
public:
	Persona* getPersonas();
	Comunidad();
	void imput();
	void show();
};

#endif /* COMUNIDAD_H_ */
