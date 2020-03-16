/*
 * ComplexNumber.c
 *
 *  Created on: 24 feb. 2020
 *      Author: aritz
 */
#include "ComplexNumber.h"

#include <stdio.h>
#include <math.h>

Complex sumar(Complex c1, Complex c2) {
	Complex c;
	c.r = c1.r + c2.r;
	c.i = c1.i + c2.i;
	return c;
}

void resta(Complex *c1, Complex *c2) {
	c1->r = c1->r - c2->r;
	c1->i = c1->i - c2->i;
}

float modulo(Complex c)
{
	return sqrt(c.r*c.r + c.i*c.i);
}

void print(Complex c) {
	printf("(%.2f, i%.2f)", c.r, c.i);
}

