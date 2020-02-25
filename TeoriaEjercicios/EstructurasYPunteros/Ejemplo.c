/*
 * Ejemplo.c
 *
 *  Created on: 20 feb. 2020
 *      Author: aritz
 */
typedef struct {
	int x;
	int y;
} Point;

typedef struct {
	Point p1;
	Point p2;
}Rect;

void sumar (Point *a, Point *b)
{
	a->x = a->x + b->x;
	a->y =a->y + b->y;
}

void main(void)
{
	Point p1 = {1, 2};
	Point p2 = {3, 4};
	Point *p3 = &p1;
	Point *p4 = &p2;
	sumar(p3, p4);
}

