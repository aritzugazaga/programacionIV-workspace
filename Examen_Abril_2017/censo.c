/*
 * censo.c
 *
 *  Created on: 29 mar. 2020
 *      Author: Aritz
 */
#include <stdio.h>
#include "censo.h"

int cuantasPersonas(Persona *ap, int tamanyo, int edad) {
	int resultado = 0;

	int i;
	for (i = 0; i < tamanyo; ++i) {
		if (ap[i].edad < edad) {
			resultado++;
		}
	}

	return resultado;
}

GrupoPersonas recuperarJovenes(Persona *ap, int tamanyo) {
	GrupoPersonas gp;

	int cont, i, suma = 0;

	cont = cuantasPersonas(ap, tamanyo, 30);
	gp.personas = (Persona*) malloc(cont * sizeof(Persona));
	gp.numeroPersonas = 0;
	for (i = 0; i < tamanyo; i++) {
		if (ap[i].edad < 30) {
			gp.personas[gp.numeroPersonas] = ap[i];
			gp.numeroPersonas++;
			suma = suma + ap[i].edad;
		}
	}
	gp.mediaEdad = (float) suma / gp.numeroPersonas;

	return gp;
}

Persona* recuperarYogurin(Persona *personas, int tamanyo) {
	Persona *menor = &personas[0];

	int i;
	for (i = 1; i < tamanyo; i++)
		if (personas[i].edad < menor->edad)
			menor = &personas[i];

	return menor;
}

void crearInforme(GrupoPersonas gp, char* fichero) {
	FILE *pf;
	int i;

	pf = fopen(fichero, "w");
	if (pf != (FILE*) NULL) {
		fprintf(pf, "CENSO DE JOVENES\n");
		fprintf(pf, "________________\n");
		for (i = 0; i < gp.numeroPersonas; i++)
			fprintf(pf, "[Nombres: %s, Edad: %d]\n", gp.personas[i].nombre,
					gp.personas[i].edad);
		fprintf(pf, "Media: %.2f", gp.mediaEdad);
		fclose(pf);
	}
}

int cuantosNombres(Persona* personas, int tamanio, char letra){
	int result = 0;
	for (size_t var = 0; var < tamanio; ++var)
			result+= (personas[var].nombre[0] == letra) ? 1 : 0;

	return result;
}

char** listadoNombres(Persona* personas, int tamanio, char letra){

	int name_size = cuantosNombres(personas, tamanio, letra);
	char** result = (char**)malloc(sizeof(char*) * name_size);
	int indice = 0;
	int i;
	for (i = 0; i < tamanio; ++i)
		if(personas[i].nombre[0] == letra) {
			result[indice] = (char*) malloc(sizeof(char*) * (strlen(personas[i].nombre)));
			strcpy(result[indice], personas[i].nombre);

			indice++;
	}
	return result;
}
