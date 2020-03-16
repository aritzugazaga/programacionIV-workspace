/*
 * main.c
 *
 *  Created on: 24 feb. 2020
 *      Author: aritz
 */
#include "complex/ComplexNumber.h"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	Complex c1 = { 2.0f, 5.0f };
	Complex *c2 = (Complex *)malloc(sizeof(Complex));

	print(c1);
	printf(" + ");
	print(*c2);
	printf(" = ");
	print(sumar(c1, *c2));
	printf("\n");

	resta(&c1, c2);
	printf("\n");

	printf("Mod: %.2f\n", modulo(c));

	printf("Size of complex %lu bytes\n", sizeof(c1));

	return 0;

}
