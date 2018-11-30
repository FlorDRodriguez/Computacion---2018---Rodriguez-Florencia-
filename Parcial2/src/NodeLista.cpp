/*
 * NodeLista.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "NodeLista.h"

NodeLista::NodeLista() {
	value = 0;
	next = NULL;
	ptr_cola = NULL;
}

NodeLista* NodeLista::getNext() {
	return next;
}

void NodeLista::setNext(NodeLista* next) {
	this->next = next;
}

Materia* NodeLista::getValue() {
	return value;
}

void NodeLista::setValue(Materia* value) {
	this->value = value;
}

Cola* NodeLista::getPtrCola() {
	return ptr_cola;
}

void NodeLista::setPtrCola(Cola* ptrCola) {
	ptr_cola = ptrCola;
}
