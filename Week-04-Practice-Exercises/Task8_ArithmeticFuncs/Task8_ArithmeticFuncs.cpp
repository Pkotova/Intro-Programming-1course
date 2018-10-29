// Task8_ArithmeticFuncs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a, b, arithmeticOperation;
	cin >> a;
	cin >> b;
	cin >> arithmeticOperation;
	switch (arithmeticOperation)
	{

	case 1:
		cout << a++ << endl;
		cout << b++ << endl;
		break;
	case 2:
		cout << a-- << endl;
		cout << b-- << endl;
		break;
	case 3:
		cout << a + b << endl;
		break;
	case 4:
		cout << a - b << endl;
		break;
	case 5:
		cout << a * b << endl;
		break;
	case 6:
		if (b == 0)
		{
			cout << "Impossible" << endl;
		}
		else
		cout << a / b << endl;
		break;
	case 7:
		if (b == 0)
		{
			cout << "Impossible" << endl;
		}
		else
			cout << a % b << endl;
		break;
	case 8:
		cout << abs(a) << endl;
		cout << abs(b) << endl;
		break;
	case 9:
		cout << pow(a, b) << endl;
		break;
	default:
		break;
	}
    return 0;
}

