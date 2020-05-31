/*
 * main.c
 *
 *  Created on: 22/04/2014
 *      Author: perallos
 */

#include "punto.h"
#include "poligono.h"

int main(void) {
	Punto p1 = { 1, 2 };
	Punto p2 = { 3, 4 };

	printf("Punto 1: ");
	imprimirPunto(p1);
	printf("Punto 2: ");
	imprimirPunto(p2);
	printf("Distancia: %f\n", distancia(p1, p2));
	trasladarXY(&p1, &p2, 5, 6);
	printf("despues de trasladar los puntos...\n");
	printf("Punto 1: ");
	imprimirPunto(p1);
	printf("Punto 2: ");
	imprimirPunto(p2);
	printf("Distancia: %f\n", distancia(p1, p2));

	int numVertices;
	printf("Numero de vertices: ");
	scanf("%i", &numVertices);

	Punto* puntos = malloc(sizeof(Punto)*numVertices);

	int k;
	for (k = 0; k < numVertices; ++k) {
		int x,y = 0;
		printf("introducir coordenada X del punto %i \n", k+1);
		scanf("%i", &x);
		printf("Introducir coordenada Y del punto %i \n", k+1);
		scanf("%i", &y);
		puntos[k].x = x;
		puntos[k].y = y;
	}

	Poligono poli = {numVertices, puntos};
	float f = perimetro(poli);
	printf("Perimetro: %f\n", perimetro(*poli));

	anadirVertice(poli, p1);
	Poligono poliCopied;
	copiarPoligono(&poliCopied, *poli);

	imprimirPoligono(*poli);
	imprimirPoligono(poliCopied);

	liberar(poli);
	free(poli);

	return 0;
}
