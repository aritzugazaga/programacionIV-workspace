#include "punto.h"
#include "letra.h"
#include <iostream>
using namespace es::deusto;
using namespace std;

int main(void)
{
	/* INSTANCIAS */

	Punto p1;
	Punto p2(1,2);
	Punto *p3 = new Punto();
	Punto *p4 = new Punto(3,4);

	p1.sumar(*p4);
	p3->sumar(p2);

	p1.imprimir();
	p3->imprimir();

	delete p3;
	delete p4;

	/* ARRAYS */

	Punto arrayE[3];
	Punto *arrayD = new Punto[3];

	arrayE[0].setX(1);
	arrayE[0].setY(2);

	arrayD[0].setX(3);
	arrayD[0].setY(4);

	arrayE[0].sumar(arrayD[0]);
	arrayE[0].imprimir();

	delete [] arrayD;

	/* NAMESPACES */

	es::deusto::Letra l1('a');
	std::cout << l1.get() << "\n";

	Letra l2('b');
	cout << l2.get() << "\n";

	/* STATIC */

	Letra::setComa(',');
	cout << Letra::getComa() << "\n";

	l1.setComa('.');
	cout << l2.getComa() << "\n";

	return 0;
}



