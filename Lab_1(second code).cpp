#include "stdafx.h"
#include <iostream>
#include <cmath>
#define Perv x
#define Vtor y

int main()
{
	int Perv;							//1-я цифра
	int Vtor;							//2-я цифра

	double c;							//ответ 1
	double n;							//ответ 2
	double f;							//ответ 3
	double g;							//ответ 4
	double k;							//ответ 5

	printf("Write X \n");			   //ввод 1-й цифры
	std::cin >> Perv;			 		
	printf("Write Y \n");		       //ввод 2-й цифры
	std::cin >> Vtor;					

	c = Vtor - Perv;					// 1-е действие
	n = 3 / c; 							// 2-е действие
	f = n * exp(Perv+Vtor);				// 3-е действие
	g = f - log(pow(Perv, 2));			// 4-е действие
	k = g + asin(pow(Vtor, 3)); 		// 5-е действие
										
	printf("x + y = %.5f \n", c);													//вывод 1-го действия									
	printf("3 / x + y = %.5f \n", n);												//вывод 2-го действия										
	printf("3 / x + y * exp (x + y) = %.5f \n", f);									//вывод 3-го действия								
	printf("3 / x + y * exp (x + y) - Ln(x^2) =  %.5f \n", g);						//вывод 4-го действия			
	printf("3 / x + y * exp (x + y) - Ln(x^2) + arcsin(y^3) = %.5f \n", k);			//вывод 5-го действия
	
    return 0;
}

