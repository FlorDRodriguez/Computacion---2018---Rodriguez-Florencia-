/*
 * Node.h
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */
#ifndef NODE_H_
#define NODE_H_

#include "Fecha.h"

class Node {
private:
	Fecha* value;
	Node* next;
public:
	Node();

	Node* getNext();
	void setNext(Node* next);
	Fecha* getValue();
	void setValue(Fecha* value);
};

#endif /* NODE_H_ */
