/*
 * operaciones.c
 *
 *  Created on: 13 feb. 2020
 *      Author: aritz
 */
#include "operaciones.h"
float sumar(float a, float b)
{
	return a + b;
}
float restar(float a, float b)
{
	return a - b;
}
int multiplicar(int a, int b)
{
	int result = 0;
	while(a > 0)
	{
		result = result + b;
		a--;
	}
	return result;
}
/*
float potencia(float a, float b)
{
	return 1;
}
*/

