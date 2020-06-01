/*
 * Circulo.cpp
 *
 *  Created on: 31 may. 2020
 *      Author: aritz
 */
#include "Figura.h"
#include "Punto.h"
#include "Circulo.h"
#include <string.h>
#include <iostream>
using namespace std;

Circulo::Circulo(const char *nombre, Punto centro, float radio) :
		Figura(nombre) {
	this->centro = centro;
	this->radio = radio;

}

Circulo::Circulo(const Circulo &c) :
		Figura(c) {
	this->centro = c.centro;
	this->radio = c.radio;
}

Circulo::~Circulo() {

}

float Circulo::getPerimetro() {
	return 2 * 3.1416 * this->radio;
}

void Circulo::imprimir() {
	Figura::imprimir();
	cout << "Centro: (" << this->centro.getX() << ", " << this->centro.getY()
			<< ")" << endl;
	cout << "Radio: " << this->radio << endl;
}
