/*
 * carrito.h
 *
 *  Created on: 2 abr. 2020
 *      Author: Aritz
 */

#ifndef CARRITO_H_
#define CARRITO_H_
#include "producto.h"

typedef struct {
	Producto p;
	int cant;
} Compra;

typedef struct {
	Compra* compras;
	float importe;
	int numCompras;
} Carrito;

void modificarCompra(Compra* c, int cant);

void imprimirCompra(Compra c);

void crearCarrito(Carrito* c, Producto* prods, int* cants, int tamanyo);

void imprimirTicket(Carrito c);

void devolverCarrito(Carrito* c);

void modificarCarrito(Carrito* carrito, int ref, int cant);

#endif /* CARRITO_H_ */
