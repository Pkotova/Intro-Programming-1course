// DevideBY2-3-not5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int number;
	cout << "Input number: ";
	cin >> number;
	if ((number % 2 == 0) && (number % 3 == 0) && (number % 5 != 0))
	{
		cout << " Correct number" << endl;
	}
	else  cout << "Incorrect number" << endl;

	system("pause");
    return 0;
}

