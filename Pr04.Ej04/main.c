/*
 * main.c
 *
 *  Created on: 12 mar. 2020
 *      Author: aritz
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;
	float nota;
} Asignatura;

int main(void) {
	Asignatura asignaturas[5];
	char opcion;

	printf("1. Introducir asignatura");
	printf("2. Mostrar listado ");
	printf("3. Calcular media");
	printf("Pulsar 'q' para salir");
	fflush(stdout);
	scanf("%c", opcion);

	return 0;
}
