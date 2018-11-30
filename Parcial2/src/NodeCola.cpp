/*
 * NodeCola.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "NodeCola.h"

NodeCola::NodeCola() {
	value = 0;
	next = NULL;
	ptr_pila = NULL;
}

NodeCola* NodeCola::getNext() {
	return next;
}

void NodeCola::setNext(NodeCola* next) {
	this->next = next;
}

Alumno* NodeCola::getValue() {
	return value;
}

void NodeCola::setValue(Alumno* value) {
	this->value = value;
}

Pila* NodeCola::getPtrPila() {
	return ptr_pila;
}

void NodeCola::setPtrPila(Pila* ptrPila) {
	ptr_pila = ptrPila;
}
