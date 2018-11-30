/*
 * Archivo.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef ARCHIVO_H_
#define ARCHIVO_H_

#include <iostream>
#include "Carrera.h"

using namespace std;

class Archivo {
private:
	string filename;
public:
	Archivo();

	string getFilename();
	void setFilename(string filename);

	void generate();
	void read(Carrera*);
};

#endif /* ARCHIVO_H_ */
