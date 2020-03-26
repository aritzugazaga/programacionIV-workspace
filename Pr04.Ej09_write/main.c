/*
 * main.c
 *
 *  Created on: 16 mar. 2020
 *      Author: Aritz
 */
#include <stdio.h>

#define MAX_NUM 10

int main(void) {
	FILE* f;

	// abrir fichero para escritura "w"
	f = fopen("prueba.txt", "w");

	// escribir en fichero un string formateado
	fprintf(f, "Escribiendo %i numeros\n", MAX_NUM);
	for ( int num = 0;  num < MAX_NUM; num++) {
		fprintf(f, "%i\n", num);
	}

	fclose(f);

	return 0;
}
