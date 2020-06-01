/*
 * figura.cpp
 *
 *  Created on: 30 may. 2020
 *      Author: Aritz
 */

#include "Figura.h"

#include <string.h>
#include <iostream>
using namespace std;

int Figura::num_figuras = 0;

Figura::Figura(const char *nombre) {
	this->nombre = new char[strlen(nombre) + 1];
	strcpy(this->nombre, nombre);
	Figura::num_figuras++;

}

Figura::Figura(const Figura &f) {
	this->nombre = new char[strlen(f.nombre) + 1];
	strcpy(this->nombre, f.nombre);
	Figura::num_figuras++;

}

Figura::Figura() {
	this->nombre = "";
	Figura::num_figuras++;

}

Figura::~Figura() {
	delete[] nombre;

}

void Figura::imprimir() {
	cout << "Nombre:" << this->nombre << endl;

}

int Figura::getNumFiguras() {
	return Figura::num_figuras;

}
