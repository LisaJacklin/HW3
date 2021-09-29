//boxer.cpp
//Lisa Jacklin
//CS 201
//9/25/2021

#include<iostream>
using namespace std;

//defines createBox and makes an integer the bounds for the box
int createBox(int value) {


    for (int a = 1; a <= value; a++)
    {
    cout << "*";
    }
cout << endl;
for (int b = 1; b <= value; b++)
{
    for (int c = 1; c <= value; c++)
    {
        cout << "*";
    }
    for (int d = 1; d <= value; d++)
    {
        cout << " ";
    }
    cout << "*" << endl;
}
for (int e = 1; e <= value; e++)
{
    cout << "*";
}
return 0;
}