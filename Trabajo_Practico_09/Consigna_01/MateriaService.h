/*
 * MateriaService.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef MATERIASERVICE_H_
#define MATERIASERVICE_H_

#include "Materia.h"
#include <fstream>

using namespace std;

class MateriaService {
public:
	void write(ofstream*, Materia*);
};
#endif /* MATERIASERVICE_H_ */
