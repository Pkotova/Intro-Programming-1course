// SalutionsOfEquation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a, b, c,discrm;

	cout << " ax*x + bx + c = 0 is your equation." << endl;

	cout << "Input a = ";
	cin >> a;
	cout << "Input b = ";
	cin >> b;
	cout << "Input c = ";
	cin >> c;

	discrm = b * b - (4 * a * c);

	if (discrm > 0)
	{
		cout << "You have 2 salutions for x;" << endl;
	}
	else if (discrm == 0)
	{
		cout << " You have one salution for x" << endl;
	}
	else cout << " No salutions ";

    return 0;
}

