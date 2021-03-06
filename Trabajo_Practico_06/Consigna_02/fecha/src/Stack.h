/*
 * Stack.h
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#ifndef STACK_H_
#define STACK_H_

#include "Node.h"

class Stack {
private:
	Node* top;
public:
	Stack();

	Node* getTop();
	void setTop(Node* top);

	void push(Fecha*);
	Fecha* pop();

	void show();
};

#endif /* STACK_H_ */
