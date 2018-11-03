// Task07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int month, year;
	cin >> month >> year;
	bool leapYear = (year % 4 == 0 && year % 100 != 0 && year % 400);

	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << 31 << endl; break;

	case 4:
	case 6:
	case 9:
	case 11: cout << 30 << endl; break;

	case 2: if (leapYear)
			{
				cout << 29 << endl;
			}
			else cout << 28 << endl;
			break;
	
	default: cout << "Invalid input" << endl;
		break;
	}
    return 0;
}

