/*
 * Familia.h
 *
 *  Created on: 2 jun. 2020
 *      Author: Aritz
 */

#include "Miembro.h"

#ifndef FAMILIA_H_
#define FAMILIA_H_

class Familia {
private:
	// Con puntero, por que si no se duplican objetos
	Miembro *conyugeH;
	Miembro *conyugeM;
public:
	Familia(Miembro *conyugeH, Miembro *conyugeM);
	Familia(const Familia &f);
	Familia();
	virtual ~Familia();

	void setConyugeH(Miembro* conyugeH);
	Miembro* getConyugeH() const;
	void setConyugeM(Miembro* conyugeM);
	Miembro* getConyugeM() const;

	char* getNombre() const;
	virtual void imprimir();
	virtual int contarMenoresDeEdad(int);

};

#endif /* FAMILIA_H_ */
