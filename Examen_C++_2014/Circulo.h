/*
 * Circulo.h
 *
 *  Created on: 31 may. 2020
 *      Author: aritz
 */

#include "Figura.h"
#include "Punto.h"

#ifndef CIRCULO_H_
#define CIRCULO_H_

class Circulo: public Figura {
	float radio;
	Punto centro;

public:
	Circulo(const char *nombre, Punto centro, float radio);
	Circulo(const Circulo &c);
	virtual ~Circulo();

	virtual void imprimir();
	virtual float getPerimetro();

};

#endif /* CIRCULO_H_ */
