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

	int int1 = 10;
	int int2 = 10;

	Tool t;
	cout<< int1<< endl;
	cout<< "Increment by value: "<< t.incrementByValue(int1)<< endl;

	cout<< "----------------------"<< endl;

	cout<< int1<< endl;
	t.incrementByReference(&int1);
	cout<< "Increment by reference: "<< int1<< endl;

	cout<< "----------------------"<< endl;

	cout<< int2<< endl;
	cout<< "Decrement by value: "<< t.decrementByValue(int2)<< endl;

	cout<< "----------------------"<< endl;

	cout<< int2<< endl;
	t.decrementByReference(&int2);
	cout<< "Decrement by reference: "<< int2<< endl;

	cout<< "----------------------"<< endl;
	int arr[5] = {5, 4, 3, 2, 1};
	t.showArray(arr, 5);
	cout<< "Order array by reference: ";
	t.orderArrayByReference(arr, 5);
	t.showArray(arr, 5);

	cout<< "----------------------"<< endl;
	int arr1[5] = {5, 4, 3, 2, 1};
	t.showArray(arr1, 5);
	cout<< "Order array and copy: ";
	t.orderArrayAndCopy(arr1, 5);
	t.showArray(arr1, 5);
}
