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
	Miembro* conyugeH;
	Miembro* conyugeM;
public:
	Familia(Miembro* conyugeH, Miembro* conyugeM);
	Familia(const Familia &f);
	Familia();
	virtual ~Familia();




};

#endif /* FAMILIA_H_ */
