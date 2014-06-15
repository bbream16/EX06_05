#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>

class Complex
{
public:
	
	Complex();
	Complex(double);
	Complex(double, double);
	double add(double, double, double, double);
	double subtract(double, double, double, double);
	double multiply(double, double, double, double);
	double divide(double, double, double, double);
	double abs(double, double);
	string toString(double, double);
	double getRealPart();
	double getImaginaryPart();

private:
	double a, b, c, d;
	
};

#endif