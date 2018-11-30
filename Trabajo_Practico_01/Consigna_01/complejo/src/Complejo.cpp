/*
 * Complejo.cpp
 *
 *  Created on: 16 mar. 2018
 *      Author: hp
 */

#include "Complejo.h"
#include <iostream>
using namespace std;

int Complejo::getImag() const {
	return imag;
}

void Complejo::setImag(int imag) {
	this->imag = imag;
}

int Complejo::getReal() const {
	return real;
}

void Complejo::setReal(int real) {
	this->real = real;

}

void Complejo::imput() {
	cout<< "Ingrese la parte real: "<< endl;
	cin>> this->real;
	cout<< "Ingrese la parte imaginaria: "<< endl;
	cin>> this->imag;
}

void Complejo::show() {
	cout<< "El complejo es: "<< this->real<< "+"<< this->imag<< "i"<< endl;
}
