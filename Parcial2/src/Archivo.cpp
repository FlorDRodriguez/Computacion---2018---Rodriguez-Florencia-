/*
 * Archivo.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "Archivo.h"
#include "MateriaService.h"
#include "AlumnoService.h"
#include "ExamenService.h"
#include "Carrera.h"
#include <fstream>

using namespace std;

Archivo::Archivo() {
	filename = "Universidad.txt";

}

string Archivo::getFilename() {
	return filename;
}

void Archivo::setFilename(string filename) {
	this->filename = filename;
}

void Archivo::generate() {
	ofstream file;

	file.open("Universidad.txt", ios::out);
	if (file.is_open()) {
		(new MateriaService())->write(&file, new Materia("Calculo", "Ingenieria", 1, "Berliansky"));
		(new AlumnoService())->write(&file, new Alumno("Florencia", "Rodriguez", 54049));
		(new ExamenService())->write(&file,	new Examen("Calculo", "10/04/2018", 8, 1, 35));
		(new ExamenService())->write(&file,	new Examen("Calculo", "10/05/2018", 6, 5, 40));
		(new ExamenService())->write(&file,	new Examen("Calculo", "10/06/2018", 7, 2, 15));
		(new AlumnoService())->write(&file, new Alumno("Eliana", "Fontana", 54050));
		(new ExamenService())->write(&file,	new Examen("Calculo", "10/04/2018", 10, 1, 35));
		(new ExamenService())->write(&file,	new Examen("Calculo", "10/05/2018", 6, 5, 40));
		(new ExamenService())->write(&file,	new Examen("Calculo", "10/06/2018", 8, 2, 15));

		(new MateriaService())->write(&file, new Materia("Economia", "Economicas", 1, "Garcia"));
		(new AlumnoService())->write(&file, new Alumno("Luciana", "Marquez", 54035));
		(new ExamenService())->write(&file,	new Examen("Economia", "25/04/2018", 8, 1, 35));

		(new MateriaService())->write(&file, new Materia("Estadstica", "Economicas", 1, "Ripari"));
		(new AlumnoService())->write(&file, new Alumno("Luciana", "Marquez", 54035));
		(new ExamenService())->write(&file,	new Examen("Estadistica", "10/05/2018", 10, 1, 35));
	}
	file.close();
}

void Archivo::read(Carrera* carrera) {
	ifstream file;

	file.open("Universidad.txt", ios::in);
	if (file.is_open()) {
		string selector;
		file >> selector;
		while (file.eof() == false) {
			if (selector == "#materia") {
				string nombre;
				string at_carrera;
				int curso;
				string profesor;
				file >> nombre >> at_carrera >> curso >> profesor;
				carrera->getMaterias()->add(new Materia(nombre, at_carrera, curso, profesor));
			}
			if (selector == "#alumno") {
				string nombre;
				string apellido;
				int legajo;
				file >> nombre >> apellido >> legajo;
				carrera->getMaterias()->getStart()->getPtrCola()->store(new Alumno(nombre, apellido, legajo));
			}
			if (selector == "#examen") {
				string materia;
				string fecha;
				int nota;
				int libro;
				int folio;
				file >> materia >> fecha >> nota >> libro >> folio;
				carrera->getMaterias()->getStart()->getPtrCola()->getEnd()->getPtrPila()->push(new Examen(materia, fecha, nota, libro, folio));
			}
			file >> selector;
		}
	}
	cout << "Ya lei el archivo" << endl;
	file.close();
}
