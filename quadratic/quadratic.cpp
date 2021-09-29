//quadratic.cpp
//Lisa Jacklin
//CS 201
//9/29/2021

#include <iostream>
#include <cmath>


void quadraticForm(float a, float b, float c) {
	//the discriminant is the portion in the square root. This has to be >= to zero
	float discriminant = b * b - 4 * a * c;

	std::cout << discriminant << "\n";


	//make sure that everything
	if (discriminant > 0) {

		//positive possibility of x
		float x1 = (-b + sqrt(discriminant)) / (2 * a);

		//negative possibility of x
		float x2 = (-b - sqrt(discriminant)) / (2 * a);

		//prints that values are real
		std::cout << "roots are real";
		//prints the values
		std::cout << "x1 = " << x1 << "\n";
		std::cout << "x2 = " << x2 << "\n";
	}
	else if (discriminant == 0) {

		//when the root is equal to zero, the roots are the same
		float x1 = -b / (2 * a);

		//roots are the same value
		std::cout << "Discriminant is zero so there is a single root value";
		//prints x1 which is the same as x2 when discriminant is zero
		std::cout << "x1 = x2 = " << x1 << "\n";
	}
	if (discriminant < 0) {
		// discriminant does not produce real numbers when negative. 
		std::cout << "No real roots present.";
	}

}
