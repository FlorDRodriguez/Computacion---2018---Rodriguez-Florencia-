/*
 * Pila.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef PILA_H_
#define PILA_H_

#include "NodePila.h"

using namespace std;

class Pila {
private:
	NodePila* top;
public:
	Pila();

	NodePila* getTop();
	void setTop(NodePila* top);

	void push(Examen*);
	Examen* pop();

	void show();
};

#endif /* PILA_H_ */
