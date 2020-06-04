/*
 * ArbolFamilias.h
 *
 *  Created on: 3 jun. 2020
 *      Author: aritz
 */

#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"

#ifndef ARBOLFAMILIAS_H_
#define ARBOLFAMILIAS_H_

class ArbolFamilia {
private:
	Familia* familias[5];
	int numFamilias;
public:
	ArbolFamilia();
	ArbolFamilia(const ArbolFamilia &af);
	~ArbolFamilia();

	void añadirFamilia(Familia* f);
	void imprimir() const;
	virtual int contarMenoresDeEdad(int);
	Miembro** getConyugesInicial(int &numConyuges, char letra) const;
};

#endif /* ARBOLFAMILIAS_H_ */
