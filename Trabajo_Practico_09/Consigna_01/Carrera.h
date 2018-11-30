/*
 * Carrera.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef CARRERA_H_
#define CARRERA_H_

#include "Lista.h"

using namespace std;

class Carrera {
private:
	Lista* materias;
public:
	Carrera();

	Lista* getMaterias();
	void setMaterias(Lista* materias);
};
#endif /* CARRERA_H_ */
