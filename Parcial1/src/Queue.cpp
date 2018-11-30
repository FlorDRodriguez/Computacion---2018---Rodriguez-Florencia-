/*
 * Queue.cpp
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#include "Queue.h"
#include <iostream>

using namespace std;

Queue::Queue() {
	this->start = this->end = NULL;
}

NodeQ* Queue::getEnd() {
	return end;
}

void Queue::setEnd(NodeQ* end) {
	this->end = end;
}

NodeQ* Queue::getStart() {
	return start;
}

void Queue::setStart(NodeQ* start) {
	this->start = start;
}

void Queue::store(Alumno* value) {
	// Creo nodo nuevo
	NodeQ* newNode = new NodeQ();
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

Alumno* Queue::retrieve() {
	// Si la cola está vacía devuelvo -255
	if (start == NULL)
		return NULL;
	// Variables auxiliares para no perder la referencia
	NodeQ* aux = start;
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

void Queue::show() {
	NodeQ* xx = start;

	while (xx != NULL) {
		cout << "Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext() << endl;
		xx->getStack()->show();
	}
	cout << endl << endl;
}
