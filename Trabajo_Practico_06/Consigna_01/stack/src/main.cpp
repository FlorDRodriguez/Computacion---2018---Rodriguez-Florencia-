//============================================================================
// Name        : stack.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Stack.h"
#include <iostream>

using namespace std;

int main() {
	Stack p;

	cout << "Test pop " << p.pop() << endl << endl;

	p.push(2);
	p.show();
	cout << endl;

	p.push(7);
	p.show();
	cout << endl;

	p.push(1);
	p.show();
	cout << endl;

	cout << "Pop: " << p.pop() << endl;
	cout << "Pop: " << p.pop() << endl;
	cout << "Pop: " << p.pop() << endl;
	cout << "Pop: " << p.pop() << endl;

	return 0;
}

