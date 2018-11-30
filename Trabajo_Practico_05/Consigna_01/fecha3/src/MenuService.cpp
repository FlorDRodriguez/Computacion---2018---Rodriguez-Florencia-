/*
 * MenuService.cpp
 *
 *  Created on: 24 may. 2018
 *      Author: hp
 */
#include <iostream>
#include "MenuService.h"

using namespace std;

int MenuService::select() {
	int opc;
	do {
		cout << "\n\t1.-Agregar";
		cout << "\n\t2.-Modificar";
		cout << "\n\t3.-Buscar";
		cout << "\n\t4.-Listar";
		cout << "\n\t5.-Eliminar";
		cout << "\n\t6.-Salir";
		cout << "\n\tElige una opcion:  ";
		cin >> opc;
	} while (opc < 1 || opc > 6);
	return opc;
}
