#ifndef PUNTO_H_
#define PUNTO_H_

class Punto
{
private:
	int x, y;
public:
	/* CONSTRUCTORES Y DESTRUCTOR */
	Punto();
	Punto(int, int);
	~Punto();
	/* GET y SET */
	int getX();
	int getY();
	void setX(int);
	void setY(int);
	/* RESTO DE METODOS */
	void sumar(Punto);
	void imprimir();
};

#endif /* PUNTO_H_ */
