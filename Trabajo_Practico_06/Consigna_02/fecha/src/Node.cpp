/*
 * Node.cpp
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#include "Node.h"
#include <iostream>

using namespace std;

Node::Node() {
	// TODO Auto-generated constructor stub
	value = 0;
	next = NULL;
}

Node* Node::getNext() {
	return next;
}

void Node::setNext(Node* next) {
	this->next = next;
}

Fecha* Node::getValue() {
	return value;
}

void Node::setValue(Fecha* value) {
	this->value = value;
}
