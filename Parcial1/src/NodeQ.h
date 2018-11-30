/*
 * Node.h
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#ifndef NODEQ_H_
#define NODEQ_H_

#include "Alumno.h"
#include "Stack.h"

class NodeQ {
private:
	Alumno* value;
	NodeQ* next;
	Stack* stack;
public:
	NodeQ();

	NodeQ* getNext();
	void setNext(NodeQ* next);
	Alumno* getValue();
	void setValue(Alumno* value);
	Stack* getStack();
	void setStack(Stack* stack);
};

#endif /* NODEQ_H_ */
