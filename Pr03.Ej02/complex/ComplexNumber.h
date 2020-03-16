/*
 * ComplexNumber.h
 *
 *  Created on: 24 feb. 2020
 *      Author: aritz
 */

#ifndef COMPLEX_COMPLEXNUMBER_H_
#define COMPLEX_COMPLEXNUMBER_H_

typedef struct {
	float r;
	float i;
} Complex;

Complex sumar(Complex c1, Complex c2);

void resta(Complex *c1, Complex *c2);

float modulo(Complex c);

void print(Complex c);


#endif /* COMPLEX_COMPLEXNUMBER_H_ */
