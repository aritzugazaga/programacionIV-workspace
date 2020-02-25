/*
 * jemplo.c
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

Rect r1 = {{20,30}, {50, 60}};

