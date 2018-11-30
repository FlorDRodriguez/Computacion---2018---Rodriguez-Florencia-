/*
 * Lista.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "Lista.h"
#include <iostream>
#include <string>

using namespace std;

Lista::Lista() {
	start = NULL;
}

NodeLista* Lista::getStart() {
	return start;
}

void Lista::setStart(NodeLista* start) {
	this->start = start;
}

void Lista::add(Materia* value) {
	NodeLista* newNode = new NodeLista();
	newNode->setValue(value);

	// Si la lista está vacía
	if (start == NULL) {
		start = newNode;
		return;
	}

	// Si el elemento nuevo es menor al primero
	if (*(start->getValue()) > *value) {
		newNode->setNext(start);
		start = newNode;
		return;
	}

	// Busca posicion para el nuevo valor
	NodeLista *previous, *search;
	search = previous = start;
	while (search != NULL && *(search->getValue()) <= *value) {
		previous = search;
		search = search->getNext();
	}

	// Si el while sale por NULL
	if (search == NULL) {
		previous->setNext(newNode);
		return;
	}

	// Si sale por mayor valor
	newNode->setNext(previous->getNext());
	previous->setNext(newNode);

}

bool Lista::remove(Materia* value) {
	// Verifica si la lista está vacía
	if (start == NULL)
		return false;
	// Verifica si es el primero
	if (*(start->getValue()) == *value) {
		NodeLista* xx = start;
		start = start->getNext();
		delete xx;
		return true;
	}
	// Busca posicion para del valor a eliminar
	NodeLista *previous, *search;
	search = previous = start;
	while (search != NULL && *(search->getValue()) != *value) {
		previous = search;
		search = search->getNext();
	}

	// Si el while sale por NULL
	if (search == NULL) {
		return false;
	}
	// Si sale del while porque encontró el valor
	NodeLista* xx = search;
	previous->setNext(search->getNext());
	delete xx;

	return true;
}

void Lista::show() {
	NodeLista* xx = start;

	while (xx != NULL) {
		cout << "#Materia: Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext() << endl;
		xx->getPtrCola()->getEnd()->getPtrPila()->show();
		cout << endl;
		xx = xx->getNext();
	}
	cout << endl << endl;
}
