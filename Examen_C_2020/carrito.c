/*
 * carrito.c
 *
 *  Created on: 2 abr. 2020
 *      Author: Aritz
 */
#include <stdio.h>
#include "carrito.h"

void modificarCompra(Compra* c, int cant) {
	c->cant = cant;
}

void imprimirCompra(Compra c) {
	printf("Ref. %i  %s \t %.2f x %i kg/ud\n", c.p.ref, c.p.nombre, c.p.precio, c.cant);
}

void crearCarrito(Carrito* c, Producto* prods, int* cants, int tamanyo) {
	c->numCompras = tamanyo;
	c->importe = 0;
	c->compras = (Compra*)malloc(sizeof(Compra) * tamanyo);

	Compra compra;
	int i;
	for (i = 0; i < tamanyo; ++i) {
		compra.p = prods[i];
		compra.cant = cants[i];
		c->compras[i] = compra;
		c->importe += c->compras[i].p.precio * c->compras[i].cant;
	}
}
void imprimirTicket(Carrito c) {
	printf("TICKET\n------\n");

	int i;
	for (i = 0; i < c.numCompras; ++i) {
		imprimirCompra(c.compras[i]);
	}
	printf("....................................\nTOTAL: %2f €", c.importe);
}

void devolverCarrito(Carrito* c) {
	free(c->compras);
}

void modificarCarrito(Carrito* carrito, int ref, int cant) {
	int i;
	for (i = 0; i < carrito->numCompras; ++i) {
		if (carrito->compras[i].p.ref == ref)
			carrito->compras[i].cant = cant;
		carrito->importe += carrito->compras[i].p.precio * carrito->compras[i].cant;
	}
}
