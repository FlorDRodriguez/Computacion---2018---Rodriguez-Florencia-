/*
 * ExamenService.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "ExamenService.h"
#include <iostream>

void ExamenService::write(ofstream* file, Examen* examen) {
	*file << "#examen" << " " << examen->getMateria() << " " << examen->getFecha() << " "
			<< examen->getNota() << " " << examen->getLibro() << " " << examen->getFolio() << endl;
}

