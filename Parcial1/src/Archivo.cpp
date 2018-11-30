#include "Archivo.h"
#include "AlumnoService.h"
#include "ExamenService.h"
#include <fstream>

using namespace std;

Archivo::Archivo() {
	filename = "alumnos.txt";
}

string Archivo::getFilename() {
	return filename;
}

void Archivo::setFilename(string filename) {
	this->filename = filename;
}

void Archivo::generate() {
	ofstream file;

	file.open("alumnos.txt", ios::out);
	if (file.is_open()) {
		(new AlumnoService())->write(&file, new Alumno("Jose", "Perez", 10));
		(new ExamenService())->write(&file,	new Examen("Computacion", "18/05/2018", 10, 1, 35));
		(new ExamenService())->write(&file,	new Examen("Informatica", "18/05/2017", 7, 10, 135));
		(new AlumnoService())->write(&file, new Alumno("Pepa", "Diaz", 105));
		(new ExamenService())->write(&file,	new Examen("Computacion", "18/05/2018", 5, 1, 35));
	}
	file.close();
}

void Archivo::read(Curso* curso) {
	ifstream file;

	file.open("almnos.txt", ios::in);
	if (file.is_open()) {
		string selector;
		file >> selector;
		while (file.eof() == false) {
			if (selector == "#alumno") {
				string nombre;
				string apellido;
				int legajo;
				file >> nombre >> apellido >> legajo;
				curso->getAlumnos()->store(new Alumno(nombre, apellido, legajo));
			}
			if (selector == "#examen") {
				string materia;
				string fecha;
				int nota;
				int libro;
				int folio;
				file >> materia >> fecha >> nota >> libro >> folio;
				curso->getAlumnos()->getEnd()->getStack()->push(new Examen(materia, fecha, nota, libro, folio));
			}
			file >> selector;
		}
	}
	file.close();
}
