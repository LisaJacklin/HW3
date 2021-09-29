// boxprint.cpp 
// Lisa Jacklin
// CS 201
// 9/25/2021
//
//program must:
// input a string and an integer from user then print
//the string inside a box of asterisks. The integer being the number
//of layers to the box.

#include <iostream>
#include "boxer.h"

int number;

int main()
{
	std::cout << "please insert an integer.";
	std::cin >> number;
	createBox(number);
}

