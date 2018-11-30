//============================================================================
// Name        : fecha5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Link.h"
#include "Fecha.h"
#include <iostream>

using namespace std;

int main() {
	Link l;

	l.add(new Fecha(6, 05, 1996));
	l.show();
	cout << endl;

	l.add(new Fecha(22, 05, 1986));
	l.show();
	cout << endl;

	l.add(new Fecha(02,05,1983));
	l.show();
	cout << endl;

	cout << "Removiendo 1996: " << (l.remove(new Fecha(6, 05, 1996)) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	cout << "Removiendo '1983': " << (l.remove(new Fecha(02, 05, 1983)) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	cout << "Removiendo '1993': " << (l.remove(new Fecha(3,4,1993)) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	return 0;
}
