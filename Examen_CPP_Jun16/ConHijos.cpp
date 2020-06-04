/*
 * ConHijos.cpp
 *
 *  Created on: 3 jun. 2020
 *      Author: aritz
 */

#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"

#include <iostream>
#include "string.h"
using namespace std;

ConHijos::ConHijos(Miembro* h, Miembro* m, int numHijos):Familia(h, m) {
	this->numHijos = numHijos;
	this->hijos = new Miembro*[numHijos];
}

ConHijos::ConHijos(const ConHijos &ch): Familia(ch){
	this->numHijos = ch.numHijos;
	this->hijos = new Miembro*[ch.numHijos];
	// Para apuntar a los mismos miembros de la familia que estoy copiando
	int i;
	while (i < ch.numHijos) {
		this->hijos[i] = ch.hijos[i];
		i++;
	}
}

ConHijos::ConHijos() {
	this->numHijos = 0;
	this->hijos = NULL;
}

ConHijos::~ConHijos() {
	delete[] this->hijos;
}

void ConHijos::setNumHijos(int numHijos) {
	this->numHijos = numHijos;
	this->hijos = new Miembro*[numHijos];
}

int ConHijos::getNumHijos() const {
	return this->numHijos;
}

void ConHijos::setHijo(Miembro* m, int orden) {
	if(orden <= this->numHijos) {
		this->hijos[orden - 1] = m;
	}
}

Miembro* ConHijos::getHijo(int orden) const{
	if (orden <= this->numHijos) {
		return this->hijos[orden - 1];
	} else {
		return NULL;
	}
}


Miembro** ConHijos::getHijos() const {
	return this->hijos;
}

void ConHijos::imprimir() {
	Familia::imprimir();
	cout << endl;
	cout << "Hijos: " << endl;
	cout << " === " <<endl;
	int i;
	for (i = 0; i < this->numHijos; ++i) {
		cout << "Hijo " << i + 1 << ": " << hijos[i]->toStr() << endl;
	}
}

int ConHijos::contarMenoresDeEdad(int edad) {
	int contador = Familia::contarMenoresDeEdad(edad);
	int i;
	for (i = 0; i < this->numHijos; ++i) {
		if (this->hijos[i]->getEdad() < edad) contador++;
	}
	return contador;
}
