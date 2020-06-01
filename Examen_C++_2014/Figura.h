/*
 * figura.h
 *
 *  Created on: 30 may. 2020
 *      Author: Aritz
 */

#ifndef FIGURA_H_
#define FIGURA_H_

class Figura {
protected:
	char *nombre;
private:
	int static num_figuras;

public:
	Figura(const char *nombre);
	Figura(const Figura &f); //Constructor copia
	Figura();
	virtual ~Figura();

	virtual void imprimir();
	virtual float getPerimetro() = 0; //Virtual puro, metodo no implememntado

	int static getNumFiguras();
};

#endif /* FIGURA_H_ */
