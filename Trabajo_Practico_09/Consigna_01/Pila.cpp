/*
 * Pila.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "Pila.h"
#include <iostream>

Pila::Pila() {
	top = NULL;
}

NodePila* Pila::getTop() {
	return top;
}

void Pila::setTop(NodePila* top) {
	this->top = top;
}

void Pila::push(Examen* value) {
	// Crear un nodo
	NodePila* newNode = new NodePila();
	// Llenar el nodo
	newNode->setValue(value);
	newNode->setNext(top);
	// Tope apunta al nuevo nodo
	top = newNode;
}

Examen* Pila::pop() {
	// Verifico si la pila tiene elementos
	if (top == NULL)
		return NULL;
	// Crear auxiliar al nodo a eliminar
	NodePila* node_delete = top;
	// Crear variable para contener el valor que tenía el nodo
	Examen* value = node_delete->getValue();
	// Correr el puntero top al nodo siguiente
	top = top->getNext();
	// Eliminar el nodo que ya no se utiliza
	delete node_delete;
	// Devolver el valor
	return value;
}

void Pila::show() {
	NodePila* xx = top;

	while (xx != NULL) {
		cout << "#Examen: Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext()
				<< endl;
		xx = xx->getNext();
	}
}
