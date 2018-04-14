#include "ComplexNumber.h"



ComplexNumber::ComplexNumber()
{
}

ComplexNumber::ComplexNumber(int a, int b)
{
	set_real(a);
	set_imaginary(b);
}

ComplexNumber::ComplexNumber(ComplexNumber, ComplexNumber)
{
}

int ComplexNumber::set_real(int a)
{
	this->a = a;
	return a;
}

int ComplexNumber::set_imaginary(int b)
{
	this->b = b;
	return b;
}

int ComplexNumber::get()
{
	return 0;
}


