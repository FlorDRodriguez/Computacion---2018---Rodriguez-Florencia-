/*
 * NodePila.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "NodePila.h"

NodePila::NodePila() {
	value = 0;
	next = NULL;
}

NodePila* NodePila::getNext() {
	return next;
}

void NodePila::setNext(NodePila* next) {
	this->next = next;
}

Examen* NodePila::getValue() {
	return value;
}

void NodePila::setValue(Examen* value) {
	this->value = value;
}
