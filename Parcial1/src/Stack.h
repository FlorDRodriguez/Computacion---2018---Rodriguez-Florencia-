/*
 * Stack.h
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#ifndef STACK_H_
#define STACK_H_

#include "NodeS.h"

class Stack {
private:
	NodeS* top;
public:
	Stack();

	NodeS* getTop();
	void setTop(NodeS* top);

	void push(Examen*);
	Examen* pop();

	void show();
};
#endif /* STACK_H_ */
