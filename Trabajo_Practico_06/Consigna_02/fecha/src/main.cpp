//============================================================================
// Name        : fecha4.cpp
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

	p.push(new Fecha(02, 12, 1963));
	p.show();
	cout << endl;

	p.push(new Fecha(06, 05, 1996));
	p.show();
	cout << endl;

	p.push(new Fecha(22, 10, 1995));
	p.show();
	cout << endl;

	Fecha* s = NULL;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->toString() << endl;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->toString() << endl;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->toString() << endl;
	if ((s = p.pop()) != NULL)
		cout << "Pop: " << s->toString() << endl;

	return 0;
}
