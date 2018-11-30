/*
 * AlumnoService.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "AlumnoService.h"

void AlumnoService::write(ofstream* file, Alumno* alumno) {
	*file << "#alumno" << " " << alumno->getNombre() << " " << alumno->getApellido() << " " << alumno->getLegajo() << endl;
}

