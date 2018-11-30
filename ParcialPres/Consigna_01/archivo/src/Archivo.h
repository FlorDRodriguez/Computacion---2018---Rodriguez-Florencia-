/*
 * Archivo.h
 *
 *  Created on: 1 jun. 2018
 *      Author: hp
 */

#ifndef ARCHIVO_H_
#define ARCHIVO_H_

#include <iostream>
#include <string>

using namespace std;

class Archivo {
private:
	string filename;
public:
	Archivo();

	string getFilename();
	void setFilename(string filename);

	void generate();
	void read();
};

#endif /* ARCHIVO_H_ */
