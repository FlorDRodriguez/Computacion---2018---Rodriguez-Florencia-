/*
 * Cola.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef COLA_H_
#define COLA_H_

#include "NodeCola.h"

using namespace std;

class Cola {
private:
	NodeCola* start;
	NodeCola* end;
public:
	Cola();

	NodeCola* getEnd();
	void setEnd(NodeCola* end);
	NodeCola* getStart();
	void setStart(NodeCola* start);

	void store(Alumno*);
	Alumno* retrieve();

	void show();
};

#endif /* COLA_H_ */
