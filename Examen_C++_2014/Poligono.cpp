/*
 * Poligono.cpp
 *
 *  Created on: 31 may. 2020
 *      Author: aritz
 */

#include "Figura.h"
#include "Punto.h"
#include "Poligono.h"

#include <string.h>
#include <iostream>
using namespace std;

Poligono::Poligono(const char *nombre, int numVertices, Punto *vertices) :
		Figura(nombre) {
	this->numVertices = numVertices;
	this->vertices = new Punto[numVertices];
	int i;
	for (i = 0; i < numVertices; ++i) {
		this->vertices[i] = vertices[i];
	}
}

Poligono::Poligono(const Poligono &p) :
		Figura(p) {
	this->numVertices = p.numVertices;
	this->vertices = new Punto[p.numVertices];
	int i;
	for (i = 0; i < p.numVertices; ++i) {
		this->vertices[i] = p.vertices[i];
	}
}

Poligono::~Poligono() {
	delete[] vertices;
}

float Poligono::getPerimetro() {
	float perimetro;
	int i;
	for (i = 0; i < this->numVertices; ++i) {
		if (i != this->numVertices - 1) {
			perimetro += vertices[i].distancia(vertices[i + 1]);
		} else {
			perimetro += vertices[i].distancia(vertices[0]);
		}
	}
	return perimetro;
}

void Poligono::imprimir() {
	Figura::imprimir();
	int i;
	for (i = 0; i < numVertices; ++i) {
		cout << "Vertice" << i << " = ";
		vertices[i].imprimir();
	}
}
