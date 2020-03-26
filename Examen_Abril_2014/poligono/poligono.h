/*
 * poligono.h
 *
 *  Created on: 26 mar. 2020
 *      Author: Aritz
 */

#ifndef POLIGONO_POLIGONO_H_
#define POLIGONO_POLIGONO_H_

#include "punto.h"

typedef struct {
	int x, y;
} Punto;

typedef struct {
	int numVertices;
	Punto *vertices;
}Poligono;

void imprimirPoligono(Poligono poli);

float perimetro(Poligono poli);

void liberar(Poligono *poli);

#endif /* POLIGONO_POLIGONO_H_ */
