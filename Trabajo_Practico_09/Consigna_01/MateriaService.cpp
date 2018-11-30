/*
 * MateriaService.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "MateriaService.h"

void MateriaService::write(ofstream* file, Materia* materia) {
	*file << "#materia" << " " << materia->getNombre() << " " << materia->getCarrera() << " " << materia->getCurso()
			<< " " << materia->getProfesor() << endl;
}

