/*
 * my_main.cpp
 *
 *  Created on: 25-Jul-2020
 *      Author: ishan
 */

#include <iostream>
#include "Complex.h"
using namespace std;
extern Complex sqrt_c(double real_num);

int main()
{
	Complex z1(0, 1);
	Complex z2(3, 2);
	cout << 1 / z1 << endl;
	cout << z1 + 5 << endl;
	cout << z1 / 4 << endl;
	cout << 6 + z1 << endl;
	cout << 5 * z1 << endl;

	double x = -9;
	cout << sqrt_c(x) * z1 << endl;
	if (z1 == z2)
	{
		cout << "Same\n";
	}

	Complex z = z1.power(9);
	cout << "z = " << z << endl;
	cout << "z1 * z1 = " << z1 * z1 * z1<< endl;
	return 0;
}
