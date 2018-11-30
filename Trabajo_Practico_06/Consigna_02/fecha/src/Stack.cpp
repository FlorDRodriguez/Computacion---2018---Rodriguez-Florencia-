/*
 * Stack.cpp
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack() {
	// TODO Auto-generated constructor stub
	top = NULL;
}

Node* Stack::getTop() {
	return top;
}

void Stack::setTop(Node* top) {
	this->top = top;
}

void Stack::push(Fecha* value) {
	// Crear un nodo
	Node* newNode = new Node();
	// Llenar el nodo
	newNode->setValue(value);
	newNode->setNext(top);
	// Tope apunta al nuevo nodo
	top = newNode;
}

Fecha* Stack::pop() {
	// Verifico si la pila tiene elementos
	if (top == NULL)
		return NULL;
	// Crear auxiliar al nodo a eliminar
	Node* node_delete = top;
	// Crear variable para contener el valor que tenía el nodo
	Fecha* value = node_delete->getValue();
	// Correr el puntero top al nodo siguiente
	top = top->getNext();
	// Eliminar el nodo que ya no se utiliza
	delete node_delete;
	// Devolver el valor
	return value;
}

void Stack::show() {
	Node* xx = top;

	while (xx != NULL) {
		cout << "Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext() << endl;
		xx = xx->getNext();
	}
}
