// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.

#include "stdafx.h"
#include <iostream>  
#include <cmath>                                 

int main()
{
	int x;
	int y;
	double b;
	
	printf("Write first number \n");
	std::cin >> x;
	printf("Write second number \n");
	std::cin >> y;
	b = 3 / (y - x) * exp(x + y) - log(pow(x, 2)) + asin(pow(y, 3));
	printf("Your answer: %.5f. ", b);
	return 0;
}