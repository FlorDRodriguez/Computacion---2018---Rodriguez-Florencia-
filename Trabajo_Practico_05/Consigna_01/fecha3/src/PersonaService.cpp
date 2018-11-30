/*
 * PersonaService.cpp
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#include "PersonaService.h"
#include <fstream>
#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

PersonaService::PersonaService() {
	lastIndex = 0;
}

void PersonaService::inputPersona(Persona* p) {
	p->input(); // podria haber echo esto en la linea 69 this->inputP.....
}

void PersonaService::loadFile() { //Lee del archivo
	ifstream file;

	long dni;
	string nombre;
	string apellido;
	string nacimiento;
	int legajo;

	this->clean(); //Limpia el arreglo para trabajar sobre uno limpio

	file.open("personas.txt", ios::in);
	if (file.is_open()) {
		file >> legajo; //Intenta leer un dato del archivo
		while (!file.eof()) { //Si no terminó de recorrer el archivo lo sigue leyendo
			file >> nombre >> apellido >> dni >> nacimiento;

			//****************************************************************
			//Trabajo con la fecha
			char buffer[11];
			strcpy(buffer,nacimiento.c_str());
			int dia;
			int mes;
			int anho;
			int contador = 0;
			char *token;
			token = strtok(buffer,"/");
			while (token != NULL) {
				contador++;
				if(contador == 1) {
					dia = atoi(token);
				} else if(contador == 2) {
					mes = atoi(token);
				} else if(contador == 3) {
					anho = atoi(token);
				}
				token = strtok(NULL, "/");
			}
			Fecha* aux = new Fecha(dia,mes,anho);
			//************************************************************************************

			this->personas[lastIndex++] = new Persona(dni, nombre, apellido, aux, legajo);
			file >> legajo;
		}
	}
	file.close();
}

void PersonaService::saveFile() { //Guardar el archivo
	ofstream file;

	file.open("personas.txt", ios::out);

	if (file.is_open()) {
		for (int i = 0; i < lastIndex; ++i) {
			file << personas[i]->getLegajo() << " " << personas[i]->getNombre() << " " << personas[i]->getApellido()  << " "
					<< personas[i]->getDni() << " " << personas[i]->toStringNacimiento() << endl;
		}
	}
	file.close();
}

void PersonaService::clean() { //Libera la memoria del arreglo para trabajar con uno limpio
	for (int i = 0; i < 1024; i++) {
		personas[i] = new Persona();
		delete personas[i]; //libera la memoria
		personas[i] = NULL; // nos aseguramos que pierda la direccion que tiene
	}
	lastIndex = 0;
}

void PersonaService::agregar() {
	this->loadFile();
	Persona* p = NULL;
	this->inputPersona(p = new Persona());
	// Verifica si ya existe
	for (int i = 0; i < lastIndex; ++i) {
		if (personas[i]->getLegajo() == p->getLegajo()) {
			cout << "\t\tYa existe el legajo...\n";
			delete p;
			return;
		}
	}
	personas[lastIndex++] = p;
	this->saveFile();
}

void PersonaService::listar() {
	this->loadFile();
	for (int i = 0; i < lastIndex; ++i) {
		personas[i]->show();
	}
}

int PersonaService::findByLegajo(int legajo) {
	for (int i = 0; i < lastIndex; ++i) {
		if (personas[i]->getLegajo() == legajo)
			return i;
	}

	return -1;
}

int PersonaService::buscar() {
	this->loadFile();

	int legajo;

	cout << "\n";
	cout << "\tIngrese el legajo: ";
	cin >> legajo;

	// busca el indice en el arreglo de la clave ingresada
	int index = this->findByLegajo(legajo);

	if (index == -1) {
		cout << "\n\tNo se encontro ningun registro con el legajo: " << legajo
				<< "\n\n\t\t\t";
		return index;
	}

	personas[index]->show();

	return index;
}

void PersonaService::eliminar() {
	int index = this->buscar();

	if (index == -1)
		return;

	Persona* auxiliar = personas[index];

	for (int i = index; i < lastIndex; ++i) {
		personas[i] = personas[i + 1];
	}
	lastIndex--;

	delete auxiliar;

	this->saveFile();

}

void PersonaService::modificar() {
	int index = this->buscar();

	if (index == -1)
		return;

	Persona* p = new Persona();
	cout << "\n";
	//cout << "\tIngresa el legajo del alumno que desea modificar: ";

	this->inputPersona(p);

	// Puntero auxiliar para no perder la referencia a los datos viejos
	Persona* auxiliar = personas[index];

	// Asigna los datos nuevos al arreglo
	personas[index] = p;

	// Desmarco la memoria de los datos viejos
	delete auxiliar;

	this->saveFile();
}
