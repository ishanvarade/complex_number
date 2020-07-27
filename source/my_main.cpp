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
	int x, y;
	cin >> x >> y;
	Complex z(x, y);
	cout << z << endl;
	cout << "argument: " << z.argument() << endl;

	return 0;
}
