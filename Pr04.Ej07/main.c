/*
 * main.c
 *
 *  Created on: 23 mar. 2020
 *      Author: Aritz
 */
#include <stdio.h>
#define X 5
#define Y 3

//a
void f1(int a[X][Y]) {
	int i, j;
	for (i = 0; i < Y; i++) {
		for (j = 0; j < X; j++)
			printf("%d", a[j][i]);
		printf("\n");
	}
	printf("\n");
}

//b
void f2(int *b[X]) {
	int i, j;
	for (i = 0; i < Y; ++i) {
		for (j = 0; j < X; j++)
			printf("%d", b[j][i]);
		printf("\n");
	}
	printf("\n");
}

//c
void f3(int **c) {
	int i, j;
	for (i = 0; i < Y; ++i) {
		for (j = 0; j < X; j++)
			printf("%d", c[j][i]);
		printf("\n");
	}
	printf("\n");
}

void f4(int (*d)[Y]) {
	int i, j;
	for (i = 0; i < Y; i++) {
		for (j = 0; j < X; j++)
			printf("%d ", d[j][i]);
		printf("\n");
	}
	printf("\n");
}

int main(void) {
	int i, j;
	// PASO 1: DECLARACIÓN E IMPLEMENTACIÓN DE LOS ARRAYS MULTIDIMENSIONALES

	// a) Array multidimensional de enteros 100% en memoria estática.
	int a[X][Y];

	// b) Array multidimensional implementado como un array de punteros a (una secuencia de) enteros.
	// La dimensión X se almacena en memoria estática. La dimensión Y debe reservarse en memoria dinámica.
	int *b[X];

	// Este código reserva memoria dinámica para las distintas secuencias (array) de enteros (dimensión Y)
	for (i = 0; i < X; i++)
		b[i] = (int*) malloc(Y * sizeof(int));

	// c) Array multidimensional implementado como un puntero a (una secuencia de) de punteros a (una secuencia de) enteros
	// Las dimensiones X e Y deben reservarse 100% en memoria dinámica
	int **c;

	// Este código reserva memoria para la secuencia de punteros a int (dimensión X)
	c = (int**) malloc(X * sizeof(int*));

	// Este código reserva memoria dinámica para las distintas secuencias (array) de enteros (dimensión Y)
	for (i = 0; i < X; i++)
		c[i] = (int*) malloc(Y * sizeof(int));

	// d) Array multidimensional implementado como un puntero a (una secuencia de) arrays de enteros
	// Las dimensiones X e Y deben reservarse 100% en memoria dinámica
	int (*d)[Y];

	// Este código reserva memoria para la secuencia de arrays a enteros
	d = (int (*)[Y]) malloc(X * sizeof(int[Y]));

	// PASO 2: INICIALIZACIÓN DE LOS VALORES DE LOS ARRAYS
	// Hacer notar que los 4 arrays se tratan igual (mismo código)

	for (i = 0; i < X; i++)
		for (j = 0; j < Y; j++) {
			a[i][j] = i * Y + j;
			b[i][j] = i * Y + j;
			c[i][j] = i * Y + j;
			d[i][j] = i * Y + j;
		}

	// PASO 3: LLAMADAS A LAS FUNCIONES

	//Pr04.Ej08

	f1(a); /*f1(b);*//*f1(c);*/f1(d);
	/*f2(a);*/f2(b);f2(c); /*f2(d);*/
	/*f3(a);*/f3(b);f3(c); /*f3(d);*/
	f4(a); /*f4(b);*//*f4(c);*/f4(d);
	// PASO 4: LIBERAMOS LA MEMORIA RESERVADA
	for (i = 0; i < X; i++)
		free(b[i]);

	for (i = 0; i < X; i++)
		free(c[i]);
	free(c);

	free(d);

	return 0;

}
