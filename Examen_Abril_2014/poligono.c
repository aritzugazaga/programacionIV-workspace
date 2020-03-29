/*
 * poligono.c
 *
 *  Created on: 26 mar. 2020
 *      Author: Aritz
 */
#include "poligono.h"
#include <stdio.h>

void imprimirPoligono(Poligono poli){
	printf("Poligono:\n");
	int i;
	for (i = 0; i < poli.numVertices; ++i) {
		printf("(%i,%i)\n", poli.vertices[i].x, poli.vertices[i].y);
	}
}

float perimetro(Poligono poli) {
	float perimetro = 0;
	if (poli.numVertices > 2) {
		int i;
		for (i = 0; i < poli.numVertices; ++i) {
			perimetro += distancia(poli.vertices[i], poli.vertices[i+1]);
		}
		perimetro += distancia(poli.vertices[0], poli.vertices[poli.numVertices - 1]);
	}
	return perimetro;
}

void liberar(Poligono *poli) {
	free(poli->vertices);
}

void anadirVertice(Poligono *poli, Punto p) {
	int newNumVertices = poli->numVertices + 1;

	Punto *puntos = malloc(newNumVertices * sizeof(Punto));
	int i;
	for (i = 0; i < poli->numVertices; ++i) {
		puntos[i] = poli->numVertices[i];
	}
	puntos[poli->numVertices] = p;

	free(poli->vertices);
	poli->vertices = puntos;
	poli->numVertices = newNumVertices;
}

void copiarPoligono(Poligono *poli1, Poligono poli2) {
	int n = poli2.numVertices;
	poli1->numVertices = n;
	poli1->vertices = malloc(n * sizeof(Punto));
	int i;
	for (i = 0; i < n; ++i) {
		poli1->vertices[i] = poli2.vertices[i];
	}
}
