/*
 * Tool.cpp
 *
 *  Created on: 5 abr. 2018
 *      Author: hp
 */
#include "Tool.h"
#include <iostream>

using namespace std;

int Tool::incrementByValue(int int1) {
	return int1++;
}

void Tool::incrementByReference(int* int1) {
	*int1 = ((*int1)+1);
}

int Tool::decrementByValue(int int2) {
	return int2--;
}

void Tool::decrementByReference(int* int2) {
	*int2 = ((*int2)-1);
}

void Tool::orderArrayByReference(int* arr, int size) {
	int x;
	for (int i=0; i<size-1; ++i) {
		for (int j=i+1; j<size; ++j) {
			if (arr[i] > arr[j]) {
				x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
		}
	}
}
int* Tool::orderArrayAndCopy(int* arr, int size) {
	int x;
	int arr_copy[5];
	for (int i=0; i<=size-1; ++i) {
		for (int j=i+1; j<=size; ++j) {
			if (arr[i] > arr[j]) {
				x = arr[i];
				arr[i] = arr[j];
				arr[j] = x;
			}
		}
	}
	for (int i=0; i<=size-1; ++i) {
		arr_copy[i] = arr[i];
		cout<< arr_copy[i];
	}
	cout<< endl;
}

void Tool::showArray(int* arr, int size) {
	for (int i=0; i<=size-1; ++i) {
		cout<< arr[i];
	}
	cout<< endl;
}
