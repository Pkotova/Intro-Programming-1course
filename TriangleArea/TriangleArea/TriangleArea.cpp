// TriangleArea.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int choice;
	double a, b, c, h, S, p;

	cout << "Calculating triangle area! " << endl;
	cout << " (1). Side and Height." << endl;
	cout << " (2). Three sides " << endl;
	cout << " >> ";
	cin >> choice;

	switch (choice)
	{
		case 1:
		{
			cout << "Input side: ";
			cin >> a;
			cout << "Input height: ";
			cin >> h;
			S = (a * h) / 2;
			cout << "The area is " << S <<" q.sm" <<endl;
			
			break;
		}
		case 2:
		{
			cout << "Input side a: ";
			cin >> a;
			cout << "Input side b: ";
			cin >> b;
			cout << "Input side c: ";
			cin >> c;
			p = (a + b + c) / 2;
			S = sqrt(p*(p - a)*(p - b)*(p - c));
			cout << "The area is " << S << " q.sm" << endl;
			
			break;
		}
		default:
			cout << "Wrong number" << endl;
			break;
		}

    return 0;
}

