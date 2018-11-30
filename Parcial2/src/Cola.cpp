/*
 * Cola.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "Cola.h"
#include <iostream>

Cola::Cola() {
	this->start = NULL;
	this->end = NULL;
}

NodeCola* Cola::getEnd() {
	return end;
}

void Cola::setEnd(NodeCola* end) {
	this->end = end;
}

NodeCola* Cola::getStart() {
	return start;
}

void Cola::setStart(NodeCola* start) {
	this->start = start;
}

void Cola::store(Alumno* value) {
	// Creo nodo nuevo
	NodeCola* newNode = new NodeCola();
	newNode->setValue(value);
	// Hago que el puntero del último (end) apunte al nuevo
	if (end != NULL)
		end->setNext(newNode);
	// Hago que el último (end) apunte al nuevo
	end = newNode;
	// Si start es NULO entonces start tambien apunta el nuevo
	if (start == NULL)
		start = newNode;
}

Alumno* Cola::retrieve() {
	// Si la cola está vacía devuelvo -255
	if (start == NULL)
		return NULL;
	// Variables auxiliares para no perder la referencia
	NodeCola* aux = start;
	Alumno* value = start->getValue();
	// Corro el start al nodo siguiente
	start = start->getNext();
	// Verifico si start es NULO
	if (start == NULL)
		end = NULL;
	// Elimino el nodo
	delete aux;
	// Devuelvo el valor recuperado
	return value;
}

void Cola::show() {
	NodeCola* xx = start;

	while (xx != NULL) {
		cout << "#Alumnos: Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: "
				<< xx->getNext() << endl;
		xx->getPtrPila()->show();
		cout << endl;
		xx = xx->getNext();
	}
	cout << endl << endl;
}
