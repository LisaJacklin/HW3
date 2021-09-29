// quadratic.cpp 
// Lisa Jacklin
// CS 201
// 9/28/2021
//

#include <iostream>
#include <cmath>

#include "quadratic.hpp"


int main() {

	float a, b, c;

	std::cout << " please insert: \n";
	std::cout << " a value: ";
	std::cin >>  a;
	std::cout << "b value: ";
	std::cin >>  b;
	std::cout << "c value: ";
	std::cin >>  c;

	quadraticForm(a, b, c);

   
}