/*
 * NodeS.h
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#ifndef NODES_H_
#define NODES_H_

#include "Examen.h"

class NodeS {
private:
	Examen* value;
	NodeS* next;
public:
	NodeS();

	NodeS* getNext();
	void setNext(NodeS* next);
	Examen* getValue();
	void setValue(Examen* value);
};

#endif /* NODES_H_ */
