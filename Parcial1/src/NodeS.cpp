/*
 * NodeS.cpp
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#include "NodeS.h"
#include <iostream>

using namespace std;

NodeS* NodeS::getNext() {
	return next;
}

void NodeS::setNext(NodeS* next) {
	this->next = next;
}

Examen* NodeS::getValue() {
	return value;
}

void NodeS::setValue(Examen* value) {
	this->value = value;
}

NodeS::NodeS() {
	// TODO Auto-generated constructor stub
	value = 0;
	next = NULL;
}
