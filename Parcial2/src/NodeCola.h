/*
 * NodeCola.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef NODECOLA_H_
#define NODECOLA_H_

#include "Alumno.h"
#include "Pila.h"

using namespace std;

class NodeCola {
private:
	Alumno* value;
	NodeCola* next;
	Pila* ptr_pila;
public:
	NodeCola();

	NodeCola* getNext();
	void setNext(NodeCola* next);
	Alumno* getValue();
	void setValue(Alumno* value);
	Pila* getPtrPila();
	void setPtrPila(Pila* ptrPila);
};

#endif /* NODECOLA_H_ */
