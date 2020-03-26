/*
 * read.c
 *
 *  Created on: 16 mar. 2020
 *      Author: Aritz
 */
#include <stdio.h>

typedef struct {
	float x, y;
} Point;

int main(void) {
	FILE* f;
	Point points[] = {{2.5f, 3.0f}, {1.2f, 5.234f}, {4.3423f, 4.4343f}};

	// abrir fichero para escritura "w"
	f = fopen("prueba.txt", "rb");

	// escribir en fichero un string formateado
	fread(points, sizeof(Point), 3, f);

	fclose(f);

	return 0;
}
