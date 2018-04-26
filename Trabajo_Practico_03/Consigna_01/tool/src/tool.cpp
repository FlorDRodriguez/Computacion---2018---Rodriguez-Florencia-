//============================================================================
// Name        : tool.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Tool.h"
#include <iostream>

using namespace std;

int main() {
	int arr[5] = {5, 4, 3, 2, 1};
	int int1 = 10;
	int int2 = 10;

	Tool t;

	t.incrementByValue(int1);
	cout<< int1<< endl;

	t.incrementByReference(&int1);
	cout<< int1<< endl;

	t.decrementByValue(int2);
	cout<< int2<< endl;

	t.decrementByReference(&int2);
	cout<< int2<< endl;

	t.orderArrayByReference(arr, 5);
	for (int i=0; i<4; ++i) {
		cout<< arr[i];
	}
	cout<< endl;

	t.orderArrayAndCopy(arr, 5);

	t.showArray(arr, 5);

	return 0;
}
