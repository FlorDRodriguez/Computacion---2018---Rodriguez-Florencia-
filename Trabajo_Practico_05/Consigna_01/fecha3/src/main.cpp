//============================================================================
// Name        : fecha3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "MenuService.h"
#include "PersonaService.h"

using namespace std;

int main() {
	int opc;
	do {
		MenuService* ms; //Puntero a menu service ms = new menuservice() se esta instanceando
		switch (opc = (ms = new MenuService())->select()) { //llama al metodo de menu service llamado select
		case 1: { //LO CREA COMO COMO PUNTERO MenuService* ms para poder hacer el delete despues
			PersonaService* ps  = NULL;
			(ps = new PersonaService())->agregar();
			cout << "\n\t\t";
			delete ps;
			break;
		}
		case 2: {
			PersonaService* ps;
			(ps = new PersonaService())->modificar();
			cout << "\n\t\t";
			break;
		}
		case 3: {
			PersonaService* ps;
			(ps = new PersonaService())->buscar();
			cout << "\n\t\t";
			break;
		}
		case 4: {
			PersonaService* ps;
			(ps = new PersonaService())->listar();
			cout << "\n\t\t";
			delete ps;
			break;
		}
		case 5: {
			PersonaService* ps;
			(ps = new PersonaService())->eliminar();
			cout << "\n\t\t";
			break;
		}
		case 6: {
			cout << "\n\n\tHa elegido salir...\n\n\t\t";
			break;
		}
		}
		delete ms;
	} while (opc != 6);

	cout << "Proceso FINALIZADO" << endl;

	return 0;
}
