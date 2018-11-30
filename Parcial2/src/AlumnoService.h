/*
 * AlumnoService.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef ALUMNOSERVICE_H_
#define ALUMNOSERVICE_H_

#include "Alumno.h"
#include <fstream>

using namespace std;

class AlumnoService {
public:
	void write (ofstream*, Alumno*);
};

#endif /* ALUMNOSERVICE_H_ */
