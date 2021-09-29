//boxer.cpp
//Lisa Jacklin
//CS 201
//9/25/2021

#include<iostream>
using namespace std;

//defines createBox and makes an integer the bounds for the box
int createBox(int num) {

for (int a = 1; a <= num; a++)
{
    cout << "*";
}
cout << endl;
for (int b = 1; b <= num; b++)
{
    for (int c = 1; c <= num; c++)
    {
        cout << "*";
    }
    for (int d = 1; d <= num; d++)
    {
        cout << " ";
    }
    cout << "*" << endl;
}
for (int e = 1; e <= num; e++)
{
    cout << "*";
}
return 0;
}