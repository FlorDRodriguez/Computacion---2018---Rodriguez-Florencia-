/*
 * Comunidad.h
 *
 *  Created on: 11 may. 2018
 *      Author: hp
 */

#ifndef COMUNIDAD_H
#define COMUNIDAD_H

#include "Persona.h"
#include "Fecha.h"
#include <string>

using namespace std;

class Comunidad {
private:
    Persona* personas;
    int size_personas;
public:
	Comunidad();

	Persona* getPersonas();
    void setPersonas(Persona* personas, int size_personas);

    void inputComunidad(int size_personas);
    void showComunidad();
};

#endif // COMUNIDAD_H
