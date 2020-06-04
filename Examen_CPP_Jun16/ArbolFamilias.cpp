/*
 * ArbolFamilias.cpp
 *
 *  Created on: 3 jun. 2020
 *      Author: aritz
 */

#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"
#include "ArbolFamilia.h"

#include <iostream>
#include "string.h"
using namespace std;

ArbolFamilia::ArbolFamilia(const ArbolFamilia &af) {
	this->numFamilias = af.numFamilias;
	int i;
	for (i = 0; i < numFamilias; ++i) {
		this->familias[i] = af.familias[i];
	}
}

ArbolFamilia::ArbolFamilia() {
	this->numFamilias = 0;
}

ArbolFamilia::~ArbolFamilia() {

}

void ArbolFamilia::añadirFamilia(Familia *f) const{
	this->familias[this->numFamilias] = f;
	this->numFamilias ++;
}

void ArbolFamilia::imprimir() const {
	int i;
	for (i = 0; i < this->numFamilias; ++i) {
		this->familias[i]->imprimir();
		cout << endl;
	}
}

int ArbolFamilia::contarMenoresDeEdad(int edad) {
	int contador = 0;
	int i;
	for (i = 0; i < this->numFamilias; ++i) {
		contador += this->familias[i]->contarMenoresDeEdad(edad);
	}
	return contador;
}

Miembro** ArbolFamilia::getConyugesInicial(int &numConyuges, char letra) const {
	numConyuges = 0;
	int i;
	for (i = 0; i < this->numFamilias; ++i) {
		if ((this->familias[i]->getConyugeH()->getNombre()[0]) == letra) numConyuges++;
		if ((this->familias[i]->getConyugeM()->getNombre()[0]) == letra) numConyuges++;
	}
	Miembro** conyuges = new Miembro*[numConyuges];
	int j;
	for (j = 0; j < this->numFamilias; ++j) {
		Miembro* h = this->familias[i]->getConyugeH();
		Miembro* m = this->familias[i]->getConyugeM();
		if ((h->getNombre()[0]) == letra) {
			conyuges[j] = h;
			j++;
		}
		if ((m->getNombre()[0]) == letra) {
			conyuges[j] = m;
			j++;
		}
	}
	return conyuges;
}
