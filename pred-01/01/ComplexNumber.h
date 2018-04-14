#pragma once
class ComplexNumber
{
public:
	ComplexNumber();
	ComplexNumber(int a, int b);
	ComplexNumber(ComplexNumber, ComplexNumber);
	int set_real(int a);
	int set_imaginary(int b);
	int get();
private:
	int a;
	int b;
};

