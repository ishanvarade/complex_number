/*
 * Complex.cpp
 *
 *  Created on: 25-Jul-2020
 *      Author: ishan
 */

#include "Complex.h"
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

Complex::Complex() {
	real_part = 0;
	imaginary_part = 0;
}
Complex::Complex(double r_p, double i_p)
{
	real_part = r_p;
	imaginary_part = i_p;
}

Complex::Complex(const string & z) {
	// To do:: The human readable format
}

Complex Complex::add(const Complex &z) const{
	Complex z1;
	z1.real_part = this->real_part + z.real_part;
	z1.imaginary_part = this->imaginary_part + z.imaginary_part;
	return z1;
}

Complex Complex::subtract(const Complex & z) const{
	Complex z1;
	z1.real_part = this->real_part - z.real_part;
	z1.imaginary_part = this->imaginary_part - z.imaginary_part;
	return z1;
}

Complex Complex::multiply(const Complex & z) const{
	Complex z1;
	z1.real_part = this->real_part * z.real_part
			- this->imaginary_part * z.imaginary_part;
	z1.imaginary_part = this->imaginary_part * z.real_part
			+ this->real_part * z.imaginary_part;
	return z1;
}

Complex Complex::reciprocal() const
{
	Complex z = conjugate();
	z.real_part = z.real_part / (multiply(conjugate()).real_part);
	z.imaginary_part = z.imaginary_part / (multiply(conjugate()).real_part);
	return z;
}

Complex::~Complex()
{
	// TODO Auto-generated destructor stub
}

Complex Complex::operator -() const
{
	Complex z;
	z.real_part = -1 * this->real_part;
	z.imaginary_part = -1 * this->imaginary_part;
	return z;
}

Complex Complex::operator +(const Complex &z) const
{
	return add(z);
}

Complex Complex::operator -(const Complex & z) const
{
	return subtract(z);
}
Complex Complex::operator *(const Complex & z) const
{
	return multiply(z);
}

Complex Complex::operator /(const Complex & z) const
{
	return multiply(z.reciprocal());
}

bool Complex::operator ==(const Complex & z) const
{
	if (real_part == z.real_part && imaginary_part == z.imaginary_part)
	{
		return true;
	}
	return false;
}

ostream & operator<<(ostream & os, const Complex & z) {
	int sign = 1;
	if (z.real_part < 0) {
		sign = -1;
		os << "- ";
	}
	if (z.real_part != 0.0)	{
		os << sign * z.real_part;
	} else if (z.imaginary_part == 0.0) {
		os << 0;
		return os;
	}

	if (z.imaginary_part < 0) {
		sign = -1;
		os << " - ";
	} else if (z.imaginary_part > 0){
		sign = 1;
		if (z.real_part != 0.0)	{
			os << " + ";
		}
	}
	if (z.imaginary_part != 0.0) {
		if (z.imaginary_part == 1 || z.imaginary_part == -1) {
			os << "i";
		} else {
			os << sign * z.imaginary_part << "i";
		}
	}

	return os;
}

Complex operator/(const double & real_num, const Complex & z)
{
	return (Complex)real_num / z;
}

Complex operator -(const double & real_num, const Complex & z)
{
	return - z + real_num;
}

Complex operator +(const double & real_num, const Complex & z)
{
	return z + real_num;
}

Complex operator *(const double & real_num, const Complex & z)
{
	return z * real_num;
}

double Complex::mod() const
{
	return sqrt(this->real_part * this->real_part + this->imaginary_part * this->imaginary_part);
}

Complex Complex::conjugate() const
{
	Complex z;
	z.real_part = real_part;
	z.imaginary_part = -1 * imaginary_part;
	return z;
}

Complex sqrt_c(double real_num)
{
	Complex z;
	if (real_num < 0)
	{
		z.imaginary_part = sqrt(-1 * real_num);
	} else
	{
		z.real_part = sqrt(real_num);
	}

	return z;
}

Complex Complex::power(int x) const
{
	if (x == 0)
	{
		return 1;
	}

	Complex z;

	if (x % 2 == 0)
	{
		z = power(x / 2);
		return z * z;
	}
	else
	{
		z = power(x / 2);
		z = z * z;
		z = multiply(z);
		return z;
	}
}


double Complex::argument() const
{
	return atan2(imaginary_part, real_part);
}
