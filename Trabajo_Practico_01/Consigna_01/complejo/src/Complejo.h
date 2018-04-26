/*
 * Complejo.h
 *
 *  Created on: 16 mar. 2018
 *      Author: hp
 */

#ifndef COMPLEJO_H_
#define COMPLEJO_H_

class Complejo {
private:
	int real;
	int imag;
public:
	int getImag() const;
	void setImag(int imag);
	int getReal() const;
	void setReal(int real);

	void imput();
	void show();
};

#endif /* COMPLEJO_H_ */
