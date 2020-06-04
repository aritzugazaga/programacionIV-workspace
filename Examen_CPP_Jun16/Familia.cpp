/*
 * Familia.cpp
 *
 *  Created on: 2 jun. 2020
 *      Author: Aritz
 */

#include "Miembro.h"
#include "Familia.h"

#include <iostream>
#include <string.h>
using namespace std;

Familia::Familia(Miembro *conyugeH, Miembro *conyugeM) {
	this->conyugeH = conyugeH;
	this->conyugeM = conyugeM;
}

Familia::Familia(const Familia &f) {
	this->conyugeH = f.conyugeH;
	this->conyugeM = f.conyugeM;
}

Familia::Familia() {
	this->conyugeH = NULL;
	this->conyugeM = NULL;
}

// No se destruye nada porque no se crean objetos con los punteros, no se reserva memoria para ellos.
Familia::~Familia() {
}

void Familia::setConyugeH(Miembro *conyugeH) {
	this->conyugeH = conyugeH;
}

Miembro *Familia::getConyugeH() const{
	return this->conyugeH;
}

void Familia::setConyugeM(Miembro* conyugeM) {
	this->conyugeM = conyugeM;
}

Miembro *Familia::getConyugeM() const{
	return this->conyugeM;
}

char* Familia::getNombre() const{
	if ((this->conyugeH != NULL) & (this->conyugeM != NULL)) {
		char *apellidoH, *apellidoM;
		apellidoH = strchr (this->conyugeH->getNombre(), ' ');
		apellidoM = strchr (this->conyugeM->getNombre(), ' ');
		if ((apellidoH != NULL) & (apellidoM != NULL)) {
			char* nombre = new char[strlen(apellidoH + 1) + 3 + strlen(apellidoM + 1)];
			strcpy (nombre, apellidoH+1);
			strcat(nombre, " - ");
			strcat(nombre, apellidoM+1);
			return  nombre;
		}
	}
	return NULL;
}

void Familia::imprimir() {
	cout << " === " << endl;
	cout << "Familia: " << this->getNombre() << endl;
	cout << " === " << endl;
	cout << "Marido: " << this->getConyugeH()->toStr() << endl;
	cout << "Mujer: " << this->getConyugeM()->toStr() << endl;
}

int Familia::contarMenoresDeEdad(int edad) {
	int contador = 0;
	if (this->conyugeH->getEdad() < edad) contador++;
	if (this->conyugeM->getEdad() < edad) contador++;
	return contador;
}
