/*
 * Materia.h
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#ifndef MATERIA_H_
#define MATERIA_H_

#include <string>

using namespace std;

class Materia {
private:
	string nombre;
	string carrera;
	int curso;
	string profesor;
public:
	Materia();
	Materia(string, string, int, string);

	string getCarrera();
	void setCarrera(string carrera);
	int getCurso();
	void setCurso(int curso);
	string getNombre();
	void setNombre(string nombre);
	string getProfesor();
	void setProfesor(string profesor);

	string toString();

	bool operator>(Materia);
	bool operator<=(Materia);
	bool operator==(Materia);
	bool operator!=(Materia);
};

#endif /* MATERIA_H_ */
