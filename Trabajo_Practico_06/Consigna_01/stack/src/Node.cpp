/*
 * Node.cpp
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#include "Node.h"
#include <iostream>

Node* Node::getNext() {
	return next;
}

void Node::setNext(Node* next) {
	this->next = next;
}

double Node::getValue() {
	return value;
}

void Node::setValue(double value) {
	this->value = value;
}

Node::Node() {
	// TODO Auto-generated constructor stub
	value = 0;
	next = NULL;
}

