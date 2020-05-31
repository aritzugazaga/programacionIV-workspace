/*
 * alumno.h
 *
 *  Created on: 27 abr. 2020
 *      Author: Aritz
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_

#include "Persona.h"

class Alumno: public Persona
{
	int numAsignaturas;
	float *notas;

public:
	Alumno(const char* nombre, int edad, int numAsignaturas);
	Alumno(const Alumno &a);
	virtual ~Alumno();

	void setNota(int i, float nota);

	virtual void diHola();
	void diAdios();

	float getNota(int i);

	int getNumAsignaturas();
};

#endif /* ALUMNO_H_ */
