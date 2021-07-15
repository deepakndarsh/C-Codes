// Table.cpp : Defines the entry point for the console application.
//
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter a number :" ;

    cin >> a;
    cout << "Table of " << a << " : " << endl;

    for (int i = 1; i < 11; i++)
    {
        cout << a << " * " << i << " = " << a * i << endl;
    }
	cin >> b;
	return 0;
}