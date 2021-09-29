// brokenkelvin.cpp 
// Lisa Jacklin
// CS 201
// 9/26/2021
//requirement:1. list the errors and correct the code
// requirement 2. place a check in the main program that will produce 
// an error if a temperature is given below -273.15 C. try handle

//code needs to include iostream and using std::cout and std::cin
#include <iostream>

using std::cout;
using std::cin;

//Converts Celsius to Kelvin
double ctok(double c) 
{
	if ( c > -273.15) {
		//cannot go from a double to an int so int k is changed to double k
		double k = c + 273.15;

		//cannot return a type(double), must return a value which is k.
		return k;
	}
	if ( c <= -273.15) {
		cout << " this value cannot be computed";
	}
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
	//cout << k << '\n';
	// this line of code should not be needed since double ctok says return k which already prints k.

}
