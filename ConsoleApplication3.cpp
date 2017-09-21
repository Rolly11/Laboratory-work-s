// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>     
#include <cmath>                                 
#include <math.h>

int main()
{
	int x;
	int y;
	
	std::cin >> x;
	std::cin >> y;
	std::cout << 3 / (y - x) * exp(x + y) - log(pow(x, 2)) + asin(pow(y, 3)) << "%.5f end";
	return 0;
}