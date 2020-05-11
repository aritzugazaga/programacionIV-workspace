#include "punto.h"
#include <iostream>
using namespace std;

Punto::Punto()
{
	this->x=0;
	this->y=0;
}
Punto::Punto(int x, int y)
{
	this->x=x;
	this->y=y;
}
Punto::~Punto()
{
	/* Nada que hacer */
}

int Punto::getX()
{
	return this->x;
}
int Punto::getY()
{
	return this->y;
}
void Punto::setX(int x)
{
	this->x = x;
}
void Punto::setY(int y)
{
	this->y = y;
}
void Punto::sumar(Punto p)
{
	this->x+=p.x;
	this->y+=p.y;
}
void Punto::imprimir()
{
	cout << "(" << this->x << ", " << this->y << ")\n";
}


