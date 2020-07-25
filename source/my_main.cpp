/*
 * my_main.cpp
 *
 *  Created on: 25-Jul-2020
 *      Author: ishan
 */

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{
	Complex z1(4, -3);
	Complex z2(6, 8);
	Complex z3(5, 3);
	Complex z4(-6, 8);
	Complex z5(-4, 3);
	Complex z6;
	Complex z7 = z6 * z5;

	cout << z1 << endl;
	cout << z2 << endl;
	cout << "z1 + z2 = " << z1 + z2 << endl;
	cout << "z1 + z3 = " << z1 + z3 << endl;
	cout << "z2 + z4 = " << z2 + z4 << endl;
	cout << "z4 + z5 = " << z4 + z5 << endl;
	cout << "z1 + z5 = " << z1 + z5 << endl;
	cout << "z1 * z2 = " << z1 * z2 << endl;
	cout << "z5 * z6 = " << z5 * z6 << endl;
	cout << "z6 * z5 = " << z6 * z5 << endl;
	cout << "z6 = " << z6 << endl;
	cout << "z7 = " << z7 << endl;
	return 0;
}


