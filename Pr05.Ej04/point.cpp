/*
 * point.cpp
 *
 *  Created on: 23 abr. 2020
 *      Author: Aritz
 */
#include "point.h"

Point::Point(int x, int y) {
	this->x = x;
	this->y = y;
}

void Point::setX(float x) {
	this->x = x;
}

void Point::setY(float y) {
	this->y = y;
}

float Point::getX() const {
	//this->x = 8; //no podemos modificar el objeto (ni llamar a un m�todo no-const sobre el) porque el m�todo es const
	return x;
}

float Point::getY() const {
	return y;
}

void Point::sumar(const Point &p)
{
	this->x += p.x;
	this->y += p.y;
	//p.x += p.x; // si por error hacemos esto el compilador nos avisa
}
