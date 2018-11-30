/*
 * Tool.h
 *
 *  Created on: 5 abr. 2018
 *      Author: hp
 */

#ifndef TOOL_H_
#define TOOL_H_

using namespace std;

class Tool {
public:
	int incrementByValue(int);
	void incrementByReference(int*);
	int decrementByValue(int);
	void decrementByReference(int*);
	void orderArrayByReference(int*, int size);
	int* orderArrayAndCopy(int*, int size);
	void showArray(int*, int size);
};

#endif /* TOOL_H_ */
