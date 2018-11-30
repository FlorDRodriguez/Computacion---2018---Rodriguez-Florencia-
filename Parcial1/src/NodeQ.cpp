/*
 * Node.cpp
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#include "NodeQ.h"

#include <iostream>

using namespace std;

NodeQ::NodeQ() {
	value = NULL;
	next = NULL;
	stack = NULL;
}

NodeQ* NodeQ::getNext() {
	return next;
}

void NodeQ::setNext(NodeQ* next) {
	this->next = next;
}

Alumno* NodeQ::getValue() {
	return value;
}

void NodeQ::setValue(Alumno* value) {
	this->value = value;
}

Stack* NodeQ::getStack() {
	return stack;
}

void NodeQ::setStack(Stack* stack) {
	this->stack = stack;
}
