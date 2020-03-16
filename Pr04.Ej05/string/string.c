/*
 * string.c
 *
 *  Created on: 9 mar. 2020
 *      Author: aritz
 */
#include <stdlib.h>
#include <stdio.h>

#include "string.h"

void imprimir(char *cadena) {
	int i = 0;

	while (cadena[i] != '\0') {
		printf("%c", cadena[i]);
		i++;
	}
}

int longitud(char *cadena) {
	int i = 0;

	while (cadena[i] != '\0') {
		i++;
	}

	return i;
}

char* clonar(char *cadena) {
	char *cadenaClon = (char*) malloc(sizeof(char) * (longitud(cadena) + 1));

	copy(cadenaClon, cadena);
	return cadenaClon;
}

void concat(char *cadena1, char *cadena2) {
	/*
		int sizeArr1 = longitud(cadena1);
		int sizeArr2 = longitud(cadena2);
		int i = 0;
		while(arr2[i] != '\0'){
			cadena1[i+sizeArr1-1] = cadena2[i];
		}
		cadena1[i+sizeArr1] = '\0';

		*/

		copy(&cadena1[longitud(cadena1), cadena2]);
}

void copy(char *cadena1, char *cadena2) {
	int i = 0;

	while (cadena2[i] != '\0') {
		cadena1[i] = cadena2[i];
		i++;
	}
	cadena1[i] = '\0';
}
