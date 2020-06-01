/*
 * Punto.h
 *
 *  Created on: 28 may. 2020
 *      Author: Aritz
 */

#ifndef PUNTO_H_
#define PUNTO_H_

class Punto {
	int x, y;

public:
	Punto(); //Constructor sin argumentos
	Punto(int x, int y); //Constructor
	~Punto(); //Destructor

	void imprimir(); //Sacar coordenadas por pantalla

	//Modificar y consultar valores
	int getX() const;
	int getY() const;
	void setX(int x);
	void setY(int y);

	//Cacula la distancia entre dos puntos
	float distancia(Punto p);
};

#endif /* PUNTO_H_ */
