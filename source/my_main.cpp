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
	Complex z = sqrt_c(-4);
	cout << "z = " << z << endl;

	return 0;
}
