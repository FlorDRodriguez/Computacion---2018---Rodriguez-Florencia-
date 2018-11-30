#ifndef ARCHIVO_H_
#define ARCHIVO_H_

#include <iostream>
#include "Curso.h"

using namespace std;

class Archivo {
private:
	string filename;
public:
	Archivo();

	string getFilename();
	void setFilename(string filename);

	void generate();
	void read(Curso*);
};

#endif /* ARCHIVO_H_ */
