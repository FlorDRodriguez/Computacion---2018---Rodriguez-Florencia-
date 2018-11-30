/*
 * Link.h
 *
 *  Created on: 25 oct. 2018
 *      Author: hp
 */

#ifndef LINK_H_
#define LINK_H_

#include "Node.h"

class Link {
private:
	Node* start;
public:
	Link();

	Node* getStart();
	void setStart(Node*);

	void add(Fecha*);
	bool remove(Fecha*);
	void show();
};

#endif /* LINK_H_ */
