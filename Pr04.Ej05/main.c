/*
 * main.c
 *
 *  Created on: 9 mar. 2020
 *      Author: aritz
 */
#include <stdio.h>
#include <stdlib.h>

#include "string\\string.h"

int main(void) {
	char* cadena1 = (char*) malloc(sizeof(char)*5);
	cadena1[0] = 'h';
	cadena1[1] = 'o';
	cadena1[2] = 'l';
	cadena1[3] = 'a';
	cadena1[4] = '\0';

	char* cadena2 = (char*) malloc(sizeof(char)*6);
	cadena2[0] = 'a';
	cadena2[1] = 'd';
	cadena2[2] = 'i';
	cadena2[3] = 'o';
	cadena2[4] = 's';
	cadena2[5] = '\0';

	imprimir(cadena1);
	longitud(cadena1);
	copy(cadena1, cadena2);
	clonar(cadena1);
	concat(cadena1, cadena2);
}
