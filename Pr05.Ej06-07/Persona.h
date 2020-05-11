/*
 * persona.h
 *
 *  Created on: 27 abr. 2020
 *      Author: Aritz
 */

#ifndef PERSONA_H_
#define PERSONA_H_

class Persona
{
	char *nombre;
	int edad;

public:
	Persona(const char* nombre, int edad);
	Persona(const Persona &p);
	virtual ~Persona();

	virtual void diHola();
	void diAdios();

	const char* getNombre();
	int getEdad();
};

#endif /* PERSONA_H_ */
