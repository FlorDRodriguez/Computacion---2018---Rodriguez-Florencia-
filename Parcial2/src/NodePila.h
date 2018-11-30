/*
 * NodePila.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef NODEPILA_H_
#define NODEPILA_H_

#include "Examen.h"

using namespace std;

class NodePila {
private:
	Examen* value;
	NodePila* next;
public:
	NodePila();

	NodePila* getNext();
	void setNext(NodePila* next);
	Examen* getValue();
	void setValue(Examen* value);
};

#endif /* NODEPILA_H_ */
