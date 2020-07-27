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
	Complex add(const Complex & z) const;
	Complex subtract(const Complex & z) const;
	Complex multiply(const Complex & z) const;
	Complex reciprocal() const;

public:
	Complex();
	Complex(double r_p, double i_p = 0);
	Complex(const string & z);
	virtual ~Complex();

	// Operator overloading
	Complex operator -() const;
	Complex operator +(const Complex & z) const;
	Complex operator -(const Complex & z) const;
	Complex operator *(const Complex & z) const;
	Complex operator /(const Complex & z) const;
	bool operator ==(const Complex & z) const;

	friend Complex sqrt_c(double real_num);
	double mod() const;
	Complex conjugate() const;
	Complex power(int x) const;
	friend 	ostream & operator<<(ostream & os, const Complex & z);
	friend Complex operator -(const double & real_num, const Complex & z);
	friend Complex operator +(const double & real_num, const Complex & z);
	friend Complex operator *(const double & real_num, const Complex & z);
	friend Complex operator /(const double & real_num, const Complex & z);
};

#endif /* COMPLEX_H_ */
