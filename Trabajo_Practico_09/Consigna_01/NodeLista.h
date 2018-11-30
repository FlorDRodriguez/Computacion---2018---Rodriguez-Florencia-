/*
 * NodeLista.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef NODELISTA_H_
#define NODELISTA_H_

#include "Materia.h"
#include "Cola.h"

using namespace std;

class NodeLista {
private:
	Materia* value;
	NodeLista* next;
	Cola* ptr_cola;
public:
	NodeLista();

	NodeLista* getNext();
	void setNext(NodeLista* next);
	Materia* getValue();
	void setValue(Materia* value);
	Cola* getPtrCola();
	void setPtrCola(Cola* ptrCola);
};

#endif /* NODELISTA_H_ */
