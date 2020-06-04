#include "Miembro.h"
#include "Familia.h"
#include "ConHijos.h"
#include "ArbolFamilia.h"

#include <iostream>
using namespace std;

int main()
{
	Miembro luis("Luis Diez", 60 /*años*/);
	Miembro marta("Marta Sanchez", 58);
	Miembro angel("Angel Diez", 32);
	Miembro laura("Laura Ponte", 30);
	Miembro hodei("Hodei Diez", 2);
	Miembro ana("Ana Diez", 7);
	Miembro pablo("Pablo Diez", 10);
	Miembro jon("Jon Pena", 40);
	Miembro maite("Maite Pazos", 35);

	cout<< luis.toStr() << " os desea suerte en el examen." << endl;

	// Apartado 3

	ConHijos* ch2 = new ConHijos(&luis, &marta, 1);
	ch2->setHijo(&angel, 1);

	ConHijos* ch1 = new ConHijos(&angel, &laura, 3);
	ch1->setHijo(&hodei, 1);
	ch1->setHijo(&ana, 2);
	ch1->setHijo(&pablo, 3);

	Familia* f1 = new Familia(&jon, &maite);

	cout << endl;
	f1->imprimir();
	cout << endl;
	ch1->imprimir();
	cout << endl;
	ch2->imprimir();

	// Apartado 5

	ArbolFamilia af;
	af.añadirFamilia(f1);
	af.añadirFamilia(ch1);
	af.añadirFamilia(ch2);

	af.imprimir();
	cout << "Menores de 35 años: " << af.contarMenoresDeEdad(35) << "miembros" << endl;

	int numConyuges;
	Miembro** conyuges = af.getConyugesInicial(numConyuges, 'L');

	cout << endl;
	cout << "Conyuges cuyo nombre empieza por L: " << endl;
	int i;
	for (i = 0; i < numConyuges; ++i) {
		cout << conyuges[i]->toStr() << endl;
	}

	delete f1;
	delete ch1;
	delete ch2;
	delete[] conyuges;

	return 0;
}
