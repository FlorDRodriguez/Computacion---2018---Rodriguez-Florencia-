/*
 * Lista.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef LISTA_H_
#define LISTA_H_

#include "NodeLista.h"

using namespace std;

class Lista {
private:
	NodeLista* start;
public:
	Lista();

	NodeLista* getStart();
	void setStart(NodeLista* start);

	void add(Materia*);
	bool remove(Materia*);

	void show();
};

#endif /* LISTA_H_ */
