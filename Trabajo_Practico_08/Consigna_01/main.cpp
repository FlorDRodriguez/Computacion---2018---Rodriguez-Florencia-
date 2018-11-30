/*
 * main.cpp
 *
 *  Created on: 3 may. 2018
 *      Author: dquinteros
 */

#include "Link.h"
#include <iostream>

using namespace std;

int main() {
	Link l;

	l.add(459,4582);
	l.show();
	cout << endl;

	l.add(147,369);
	l.show();
	cout << endl;

	l.add(101,451);
	l.show();
	cout << endl;

	l.add(945,785);
	l.show();
	cout << endl;

	l.add(147,555);
	l.show();
	cout << endl;

	cout << "Removiendo 459,4582: " << (l.remove(459,4582) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	cout << "Removiendo 147,369: " << (l.remove(147,369) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	cout << "Removiendo 101,451: " << (l.remove(101,451) == true ? "true" : "false") << endl;
	l.show();
	cout << endl;

	return 0;
}


