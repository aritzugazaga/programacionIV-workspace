/*
 * ConHijos.h
 *
 *  Created on: 3 jun. 2020
 *      Author: aritz
 */

#include "Familia.h"
#include "Miembro.h"

#ifndef CONHIJOS_H_
#define CONHIJOS_H_

class ConHijos: public Familia {
private:
	int numHijos;
	Miembro **hijos;
public:
	ConHijos(Miembro* h, Miembro* m, int numHijos);
	ConHijos(const ConHijos &c);
	ConHijos();
	virtual ~ConHijos();

	void setNumHijos(int numHijos);
	int getNumHijos() const;
	void setHijo(Miembro* m, int orden);
	Miembro* getHijo(int orden) const;
	Miembro** getHijos() const;

	virtual void imprimir();
	virtual int contarMenoresDeEdad(int);

};

#endif /* CONHIJOS_H_ */
