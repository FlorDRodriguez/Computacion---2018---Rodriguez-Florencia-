/*
 * Curso.h
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#ifndef CURSO_H_
#define CURSO_H_

#include "Queue.h"

class Curso {
private:
	Queue* alumnos;
public:
	Curso();
	Curso(Queue*);

	Queue* getAlumnos();
	void setAlumnos(Queue*);
};

#endif /* CURSO_H_ */
