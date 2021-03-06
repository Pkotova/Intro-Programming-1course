// TrigonometricFuncsSwitch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double x;
	int choice;
	
	cout << "f(x) = y:" << endl;
	cout << " (1) y = x - 5" << endl;
	cout << " (2) y = sin(x)" << endl;
	cout << " (3) y = cos(x)" << endl;
	cout << " (4) y = exp(x)" << endl;
	cout << " >> ";
	cin >> choice;
	
	switch (choice)
	{
	case 1: {
		cout << "Input x = ";
		cin >> x;
		cout <<">> y = x - 5 = "<< x - 5 << endl;
		break;
	}
	case 2: {
		cout << "Input x = ";
		cin >> x;
		cout << ">> y = sin(x) = " << sin(x) << endl;
		break;
	}
	case 3: {
		cout << "Input x = ";
		cin >> x;
		cout << ">> y = cos(x) = " << cos(x) << endl;
		break;
	}
	case 4: {
		cout << "Input x = ";
		cin >> x;
		cout << ">> y = exp(x) = " << exp(x) << endl;
		break;
	}
	default:
		cout << "Wrong input" << endl;
		break;
	}
    return 0;
}

