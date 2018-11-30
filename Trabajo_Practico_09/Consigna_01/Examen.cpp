/*
 * Examen.cpp
 *
 *  Created on: 13 jun. 2018
 *      Author: hp
 */

#include "Examen.h"
#include <sstream>

Examen::Examen() {
	materia = "";
	fecha = "";
	nota = 0;
	libro = 0;
	folio = 0;
}

Examen::Examen(string materia, string fecha, int nota, int libro, int folio) {
	this->materia = materia;
	this->fecha = fecha;
	this->nota = nota;
	this->libro = libro;
	this->folio = folio;
}

string Examen::getFecha() {
	return fecha;
}

void Examen::setFecha(string fecha) {
	this->fecha = fecha;
}

int Examen::getFolio() {
	return folio;
}

void Examen::setFolio(int folio) {
	this->folio = folio;
}

int Examen::getLibro() {
	return libro;
}

void Examen::setLibro(int libro) {
	this->libro = libro;
}

string Examen::getMateria() {
	return materia;
}

void Examen::setMateria(string materia) {
	this->materia = materia;
}

int Examen::getNota() {
	return nota;
}

void Examen::setNota(int nota) {
	this->nota = nota;
}

string Examen::toString() {
	stringstream ss;

	ss << "Materia: " << materia << " - Fecha: " << fecha << " - Nota: " << nota << " - Libro:" << libro
			<< " - Folio:" << folio;

	return ss.str();
}
