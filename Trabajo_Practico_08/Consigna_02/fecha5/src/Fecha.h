/*
 * Fecha.h
 *
 *  Created on: 25 oct. 2018
 *      Author: hp
 */

#ifndef FECHA_H_
#define FECHA_H_

#include <string>

using namespace std;

class Fecha {
private:
       int dia;
       int mes;
       int anho;
public:
        Fecha();
        Fecha(int, int, int);

        void setDia(int);
        int getDia() const;
        void setMes(int);
        int getMes() const;
        void setAnho(int);
        int getAnho() const;

        void input();
        void show();

        string toString();

        bool operator>(Fecha);
        bool operator<=(Fecha);
        bool operator==(Fecha);
        bool operator!=(Fecha);
};

#endif /* FECHA_H_ */
