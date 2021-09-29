// brokenkelvin.cpp 
// Lisa Jacklin
// CS 201
// 9/26/2021
//requirement: list the errors and correct the code

//code needs to include iostream and using std::cout and std::cin
#include <iostream>

using std::cout;
using std::cin;

//Converts Celsius to Kelvin
double ctok(double c) 
{
	//cannot go from a double to an int so int k is changed to double k
	double k = c + 273.15;
	//cannot return a type(double), must return a value which is k.
	return k;
}

int main()
{
	double c = 0;
	//what is d? d is not an integer that is defined so I changed it to c.
	cin >> c;
	//c does not need brackets or punctuation "" because otherwise it is considered a char value which 
	//double does not accept
	double k = ctok(c);

	//cout has to be lower case, capital C is changed
	cout << k << '\n';
}
