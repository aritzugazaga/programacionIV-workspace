/*
 * main.c
 *
 *  Created on: 27 feb. 2020
 *      Author: aritz
 */
#include <stdio.h>

typedef struct {
	int x, y;
} Point;

void escalar(Point *p, int *enteros, int size) {
	int i = 0;
	for (i = 0; i < size; ++i) {
		p[i].x *= enteros[i];
		p[i].y *= enteros[i];
	}
}

int main(void) {
	int array[3];
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;

	Point *p;
	Point p1 = { 1, 2 };
	Point p2 = { 2, 3 };
	Point p3 = { 3, 4 };
	p = malloc(sizeof(int) * 3);

	p[0] = p1;
	p[1] = p2;
	p[2] = p3;

	printf(escalar(p, array, 3));
}
