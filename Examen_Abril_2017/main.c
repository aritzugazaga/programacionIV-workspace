#include "persona.h"
#include "censo.h"

int main(void) {
	Persona personas[5];
	personas[0].nombre = "Hodei";
	personas[0].edad = 6;
	personas[1].nombre = "Anita";
	personas[1].edad = 41;
	personas[2].nombre = "Aitor";
	personas[2].edad = 12;
	personas[3].nombre = "Idoia";
	personas[3].edad = 31;
	personas[4].nombre = "Maite";
	personas[4].edad = 24;
	int cont, i;
	GrupoPersonas gp;
	Persona *menor;

	cont = cuantasPersonas(personas, 5, 15);
	printf("\nNumero de personas menores de 15 años = %d", cont);
	gp = recuperarJovenes(personas, 5);
	printf("\nGrupo de personas menores de 30 años: ");
	for (i = 0; i < gp.numeroPersonas; i++)
		imprimirPersona(gp.personas[i]);
	printf("\nMedia: %.2f", gp.mediaEdad);
	menor = recuperarYogurin(personas, 5);
	printf("\nLa persona mas joven es: ");
	imprimirPersona(*menor);
	/*
	 menor es un puntero que guarda la dirección de memoria de la variable con los datos de la persona más joven
	 Poniendo *menor accedemos a la variable cuya dirección de memoria guarda el puntero
	 */
	crearInforme(gp, "JOVENES.TXT");

	free(menor);
	free(gp.personas);
	free(gp);

	return 0;
}
