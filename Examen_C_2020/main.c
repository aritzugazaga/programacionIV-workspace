#include <stdio.h>
#include <string.h>
#include "producto.h"
#include "carrito.h"

int main(void)
{
	Producto p1; p1.ref=1; strcpy(p1.nombre,"Platanos"); p1.precio=12.0;
	Producto p2; p2.ref=2; strcpy(p2.nombre,"Solomillo"); p2.precio=32.2;
	Producto p3; p3.ref=3; strcpy(p3.nombre,"Chocolate"); p3.precio=25.5;
	Producto p4; p4.ref=4; strcpy(p4.nombre,"Rodaballo"); p4.precio=35.4;
	Producto p5; p5.ref=5; strcpy(p5.nombre,"Cereales"); p5.precio=10.5;

	imprimirProducto(p1);

	Producto* comprados[] = {&p1, &p2, &p3, &p4, &p5};
	int cants[5] = {8, 6, 4, 4, 9};

	Compra compra = {p1, 8};
	Carrito c;

	printf("ANTES de la modificación de la compra...\n");
	imprimirCompra(compra);
	modificarCompra(&compra, 7);
	printf("DESPUES de la modificación de la compra...\n");
	imprimirCompra(compra);

	printf("ANTES de la modificación de la carrito...\n");
	crearCarrito(&c, comprados, cants, 5);
	imprimirTicket(c);

	printf("DESPUES de la modificación de la carrito...\n");
	modificarCarrito(&c, 3, 0);
	devolverCarrito(&c);

	leerProductos(comprados, "productos.txt");

	return 0;
}

void leerProductos(Producto* productos[], char* fichero) {
	FILE *f;

	char c;

		int num_lines = 0;

		// abrir fichero para escritura "w"
		f = fopen(fichero, "r");

		//leer mientras no se llegue al final del fichero EOF
		while ((c = fgetc(f)) != EOF) {
			if (c == '\n')
				num_lines++;
			putchar(c);
		}

		//cerrar fichero
		fclose(f);

		printf("El fichero tiene %i líneas\n", num_lines);
}
