/*
 * Queue.h
 *
 *  Created on: 16 may. 2018
 *      Author: hp
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <string>

#include "NodeQ.h"

using namespace std;

class Queue {
private:
	NodeQ* start;
	NodeQ* end;
public:
	Queue();

	NodeQ* getEnd();
	void setEnd(NodeQ*);
	NodeQ* getStart();
	void setStart(NodeQ*);

	void store(Alumno*);
	Alumno* retrieve();

	void show();
};
#endif /* QUEUE_H_ */
