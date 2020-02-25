/*
 * main.c
 *
 *  Created on: 20 feb. 2020
 *      Author: aritz
 */
#include <stdio.h>

typedef struct {
	int x;
	int y;
} Point;

void escalar(Point *p, int n) {
	p->x += n;
	(*p).y += n;
}

void main(void) {
	Point point = { 4, 5 };
	escalar(&point, 10);
	printf("(%i, %i)", point.x, point.y);
}

