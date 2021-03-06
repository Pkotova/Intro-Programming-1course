// Task07.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// Petya Kotova - 71866 , 2group, Information systems

int main()
{
	int month, year;
	cout << "Input the number of month you want to check: ";
	cin >> month;

	if (!cin || month > 12 || month < 0) //checking for correct input
	{
		cout << "Wrong input" << endl;
		return 0;
	}

	cout << "Input the year ";
	cin >> year;

	if (!cin) // cheking for correct input
	{
		cout << "Wrong input" << endl;
		return 0;
	}

	bool leapYear = (year % 4 == 0 && year % 100 != 0 && year % 400); // return true or false if the year is leap

	switch (month)
	{
	case 1:  cout << "January 31" << endl; break;
	case 3:  cout << "March 31" << endl; break;
	case 5:  cout << "May 31" << endl; break;
	case 7:  cout << "July 31" << endl; break;
	case 8:  cout << "June 31" << endl; break;
	case 10: cout << "October 31" << endl; break;
	case 12: cout << "December 31" << endl; break;

	case 4:  cout << "April 30" << endl; break;
	case 6:  cout << "June 30" << endl; break;
	case 9:  cout << "September 30" << endl; break;
	case 11: cout << "November 30" << endl; break;

	case 2: if (leapYear) // checking for number of days in February, depends on leap/not leap year
			{
				cout << "February "<< 28 + leapYear << endl;
			}
			else cout << "February 28 " << endl;
			break;
	
	default: cout << "Invalid input" << endl;
		break;
	}
    return 0;
}

