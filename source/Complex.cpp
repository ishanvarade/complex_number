/*
 * Complex.cpp
 *
 *  Created on: 25-Jul-2020
 *      Author: ishan
 */

#include "Complex.h"
#include <string>
#include <iostream>
using namespace std;

Complex::Complex() {
	real_part = 0;
	imaginary_part = 0;
}


Complex::Complex(double r_p, double i_p) {
	real_part = r_p;
	imaginary_part = i_p;
}

Complex::Complex(const string & z) {
	// To do:: The human readable format
}

Complex Complex::add(const Complex &z) {
	Complex z1;
	z1.real_part = this->real_part + z.real_part;
	z1.imaginary_part = this->imaginary_part + z.imaginary_part;
	return z1;
}

Complex Complex::multiply(const Complex & z) {
	Complex z1;
	z1.real_part = this->real_part * z.real_part
			- this->imaginary_part * z.imaginary_part;
	z1.imaginary_part = this->imaginary_part * z.real_part
			+ this->real_part * z.imaginary_part;
	return z1;
}

Complex::~Complex() {
	// TODO Auto-generated destructor stub
}

Complex Complex::operator +(const Complex &z) {
	return this->add(z);
}

Complex Complex::operator *(const Complex & z) {
	return this->multiply(z);
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
		os << z.real_part;
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
		os << sign * z.imaginary_part << "i";
	}

	return os;
}
