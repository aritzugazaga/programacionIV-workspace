/*
 * main.c
 *
 *  Created on: 14 feb. 2020
 *      Author: aritz
 */
#include <stdio.h>

#include "practica1/operaciones.h"
int main(void) {
	printf("suma: %f", sumar(3.2, 5.3));
	printf("resta: %f", restar(5.5, 2.2));
	printf("multiplicacion: %i", multiplicar(5, 4));
//	printf("potencia: %f", potencia(2, 3));

/*Ejercicio 2
	char c = getchar();	// En el buffer se introduce 'a' y '/n'

	while (c != "q") {
		if (c != "/n") {
			printf("has introducido la letra %c. Ascii = %d", c, c);
			c = c - 32;
			printf("has introducido la letra %c. Ascii = %d", c);
			c = getchar();
		}
	}
*/
	return 1;
}

