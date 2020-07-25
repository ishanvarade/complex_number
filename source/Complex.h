/*
 * Complex.h
 *
 *  Created on: 25-Jul-2020
 *      Author: ishan
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <string>
using namespace std;

class Complex {
private:
	double real_part;
	double imaginary_part;
	Complex add(const Complex & z);
	Complex multiply(const Complex & z);

public:
	Complex();
	Complex(double r_p, double i_p);
	Complex(const string & z);
	virtual ~Complex();

	// Operator overloading
	Complex operator +(const Complex & z);
	Complex operator *(const Complex & z);

	friend 	ostream & operator<<(ostream & os, const Complex & z);
};

#endif /* COMPLEX_H_ */
