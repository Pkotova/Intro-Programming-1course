// Week09_Pointers_Task01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

//Petya Kotova fn:71866 2gr.

using namespace std;

void Swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	Swap(&a, &b);
	cout << "Values swapped: " << endl;
	cout <<"a = " << a << endl;
	cout <<"b = " <<  b << endl;
    return 0;
}

