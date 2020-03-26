/*
 * main.c
 *
 *  Created on: 16 mar. 2020
 *      Author: Aritz
 */
#include <stdio.h>

#define MAX_NUM 10

int main(void) {
	FILE *f;
	char c;

	int num_lines = 0;

	// abrir fichero para escritura "w"
	f = fopen("prueba.txt", "r");

	//leer mientras no se llegue al final del fichero EOF
	while ((c = fgetc(f)) != EOF) {
		if (c == '\n')
			num_lines++;
		putchar(c);
	}

	//cerrar fichero
	fclose(f);

	printf("El fichero tiene %i líneas\n", num_lines);

	return 0;
}

