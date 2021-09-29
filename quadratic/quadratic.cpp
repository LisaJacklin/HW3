//quadratic.cpp
//Lisa Jacklin
//CS 201
//9/29/2021

#include <iostream>
#include <cmath>


void quadraticForm(float a, float b, float c) {
	//the discriminant is the portion in the square root. This has to be >= to zero
	float discriminant = b * b - 4 * a * c;


	//make sure that everything
	if (discriminant > 0) {
		//positive possibility of x
		float x1 = (-b + sqrt(discriminant)) / (2 * a);

		//negative possibility of x
		float x2 = (-b - sqrt(discriminant)) / (2 * a);

		//prints the values
		std::cout << "x1 = " << x1 << "\n";
		std::cout << "x2 = " << x2 << "\n";
	}
	else if (discriminant = 0) {
		//when the root is equal to zero, the roots are the same
		float x1 = -b / (2 * a);

		//prints x1 which is the same as x2 when discriminant is zero
		std::cout << "x1 = x2 = " << x1 << "\n";
	}

	//now when the discriminant is not zero and is different (imaginary numbers)
	else {
		//the full integer portion
		float real = -b / (2 * a);

		//whenever there is an i included
		float imaginary = sqrt(-discriminant) / (2 * a);
		
		//print the values given from this
		std::cout << "x1 = " << real << "+" << imaginary << "i " << "\n";
		std::cout << "x2 = " << real << "-" << imaginary << "i" << "\n";

	}


}
