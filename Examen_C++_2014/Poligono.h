/*
 * Poligono.h
 *
 *  Created on: 31 may. 2020
 *      Author: aritz
 */

#include "Figura.h"
#include "Punto.h"

#ifndef POLIGONO_H_
#define POLIGONO_H_

class Poligono: public Figura {
	int numVertices;
	Punto *vertices;

public:
	Poligono(const char *nombre, int numVertices, Punto *vertices);
	Poligono(const Poligono &p);
	virtual ~Poligono();

	float getPerimetro();

	virtual void imprimir();

};

#endif /* POLIGONO_H_ */
