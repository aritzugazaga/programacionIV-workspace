#include "letra.h"
using namespace es::deusto;

char Letra::coma;

Letra::Letra(char c)
{
	this->c=c;
}
char Letra::get()
{
	return this->c;
}
void Letra::set(char c)
{
	this->c=c;
}
char Letra::getComa()
{
	return Letra::coma;
}
void Letra::setComa(char coma)
{
	Letra::coma=coma;
}
