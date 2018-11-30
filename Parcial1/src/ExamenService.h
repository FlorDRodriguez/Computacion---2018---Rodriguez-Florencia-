/*
 * ExamenService.h
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#ifndef EXAMENSERVICE_H_
#define EXAMENSERVICE_H_

#include "Examen.h"
#include <fstream>

class ExamenService {
public:
	void write(ofstream*, Examen*);
};

#endif /* EXAMENSERVICE_H_ */
