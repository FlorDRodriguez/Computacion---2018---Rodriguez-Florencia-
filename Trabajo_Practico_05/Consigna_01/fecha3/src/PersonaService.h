/*
 * PersonaService.h
 *
 *  Created on: 23 may. 2018
 *      Author: hp
 */

#ifndef PERSONASERVICE_H_
#define PERSONASERVICE_H_

#include "Persona.h"

class PersonaService {
private:
	Persona* personas[1024];
	int lastIndex; //para apuntar a la proxima posicion vacia del arreglo
	void inputPersona(Persona*);
public:
	PersonaService();

	void loadFile();
	void saveFile();
	int findByLegajo(int);
	void clean();

	void agregar();
	void listar();
	int buscar();
	void eliminar();
	void modificar();
};

#endif /* PERSONASERVICE_H_ */
