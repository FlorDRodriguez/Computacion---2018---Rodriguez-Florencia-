/*
 * Node.h
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
private:
	double value;
	Node* next;
public:
	Node();

	Node* getNext();
	void setNext(Node* next);
	double getValue();
	void setValue(double value);
};

#endif /* NODE_H_ */
