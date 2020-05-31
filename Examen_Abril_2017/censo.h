/*
 * censo.h
 *
 *  Created on: 29 mar. 2020
 *      Author: Aritz
 */

#ifndef CENSO_H_
#define CENSO_H_

#include "persona.h"

typedef struct
{
	int numeroPersonas;
	Persona* personas;
	float mediaEdad;
} GrupoPersonas;

int cuantasPersonas(Persona* ap, int tamanyo, int edad);

GrupoPersonas recuperarJovenes(Persona* ap, int tamanyo);

Persona* recuperarYogurin(Persona* ap, int tamanyo);

void crearInforme(GrupoPersonas gp, char* fichero);

#endif /* CENSO_H_ */
