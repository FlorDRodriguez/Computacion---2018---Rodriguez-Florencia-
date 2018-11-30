/*
 * ExamenService.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef EXAMENSERVICE_H_
#define EXAMENSERVICE_H_

#include "Examen.h"
#include <fstream>

using namespace std;

class ExamenService {
public:
	void write(ofstream*, Examen*);
};

#endif /* EXAMENSERVICE_H_ */
