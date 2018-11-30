/*
 * Archivo.cpp
 *
 *  Created on: 1 jun. 2018
 *      Author: hp
 */

#include "Archivo.h"
#include <fstream>

Archivo::Archivo() {
	filename = "alumnos.txt";
}

string Archivo::getFilename() {
	return filename;
}

void Archivo::setFilename(string filename) {
	this->filename = filename;
}

void Archivo::read() {
	ifstream file;
	char linea[128];
	long contador = 0;

	file.open("texto.txt", ios::in);
	if (file.is_open()) {
		while(!file.eof()) {
			file.getline(linea, sizeof(linea));
			cout << linea << endl;
		    if((++contador % 24) == 0) {
		    	cout << "CONTINUA...";
		        cin.get();
		    }
		}
	}
	file.close();
}
