// Problem_XY_inSertanArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x, y,expr;
	cout << "Enter x = ";
	cin >> x;
	cout << "Enter y = ";
	cin >> y;
	expr = sqrt( x * x + y * y);
	if (y >= 0) 
	{
		if (expr <= 2)
		{
			cout << "1" << endl;
		}
		else cout << "0" << endl;

	}
	else if (y >= -2 && (x <= 1 && x >= -1))
	{
		cout << "1" << endl;
	}
	else cout << "0" << endl;

    return 0;
}

