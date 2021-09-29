//boxer.cpp
//Lisa Jacklin
//CS 201
//9/25/2021

#include<iostream>
using namespace std;



//defines createBox and makes an integer the bounds for the box
int createBox(std::string &word, int value) {

 //creates the top row of the box
 for (int a = 1; a <= 10; a++)
    {
    cout << "*";
    }
cout << endl;

// total amount of rows minus the top and botom rows
for (int b = 1; b <= 8; b++)
{
    //outside left and right sides and how many astericks that are on the outline
    for (int c = 1; c <= 1; c++)
    {
        cout << "*";
    }

    //the amount of spaces between the the astericks on the left and on the right
    for (int d = 1; d <= 10; d++)
    {
        cout << " ";
    }
    cout << "*" << endl;
}
//creates the bottom row
for (int e = 1; e <= 10; e++)
{
    cout << "*";
}
return 0;
}