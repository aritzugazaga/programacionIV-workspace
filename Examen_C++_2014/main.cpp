/*
 * mainl.cpp
 *
 *  Created on: 1 jun. 2020
 *      Author: aritz
 */

#include "Punto.h"
#include "Figura.h"
#include "Circulo.h"
#include "Poligono.h"

#include<iostream>
using namespace std;

void imprimirDetalleFigura(Figura &f) {
	// TAREA 4.2: Implementar esta función.
	f.imprimir();
	cout << "Perimetro: " << f.getPerimetro() << endl;
}

float sumarPerimetros(Figura *figuras[], int numFiguras) {
	// TAREA 4.3: Implementar esta función.
	float perimetro;

	int i;
	for (i = 0; i < numFiguras; ++i) {
		perimetro += figuras[i]->getPerimetro();
	}

	return perimetro;
}

int main(void) {
	Circulo c1("Circulo1", Punto(1, 2), 3);
	Circulo *c2 = new Circulo("Circulo2", Punto(2, 1), 4);

	Punto vertices[] = { Punto(1, 1), Punto(1, 2), Punto(2, 1) };
	Poligono *p1 = new Poligono("Triangulo", 3, vertices);

	// TAREA 4.1: Imprimir por pantalla el numero de figuras creadas
	cout << "Numero de figuras: " << Figura::getNumFiguras() << endl;

	// TAREA 4.2: Imprime el detalle de cada una de las figuras existentes
	// Ponemos * antes de c2 y p1 porque se quiere recibir un objeto
	imprimirDetalleFigura(c1);
	imprimirDetalleFigura(*c2);
	imprimirDetalleFigura(*p1);

	// TAREA 4.3: Imprimir por pantalla la suma de los perimetros de las 3 figuras
	// Ponemos un & antes de c1 porque se quiere recibir un puntero
	Figura *figuras[] = { &c1, c2, p1 };

	cout << "Suma de perimetros: "
			<< sumarPerimetros(figuras, Figura::getNumFiguras()) << endl;

	// Liberar memoria
	delete c2;
	delete p1;

	return 0;
}
