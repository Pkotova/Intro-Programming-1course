// Problem_Calendar_Nextday.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

/*
По въведен ден от месеца, номер на месец[1, 12], година[1900, 2100] искаме да получим на екрана следващият ден изкаран в следен формат :

пример:

вход: 31 12 1989

изход : Wednesday, 1, January, 1990

При въведена невъзможна или несъществуваща дата, то трябва да получим съответно съобщение за грешка.
*/

int main()
{
	int month, year, day, daysCounter, dayOfWeek, tempDay, tempYear;

	do {
		cout << "Enter day: ";
		cin >> day;
	} while (!(day >= 1 && day <= 31));

	do {
		cout << "Enter month: ";
		cin >> month;
	} while (!(month >= 1 && month <= 12));

	do {
		cout << "Enter year: ";
		cin >> year;
	} while (!(year >= 1900 && year <= 2100));

	bool leapYear = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	bool daysInMoth = month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12;

	day++;
	if (month == 2)
	{
		if (!leapYear && day > 28)
		{
			cout << "Wrong Date." << endl;
			goto brk;
		}
	}
	if (daysInMoth)
	{
		daysCounter = 31;
		if (month == 2)
		{
			if (leapYear)
			{
				daysCounter = 29;
			}
			else
			{
				daysCounter = 28;
			}
		}

	}
	else daysCounter = 30;

	if (day / daysCounter > 0)
	{
		month++;
		day = 1;
		if (month / 12 > 0)
		{
			year++;
			month = 1;
		}
	}

	tempDay = day;
	tempYear = year;

	dayOfWeek = (day += month < 3 ? year-- : year - 2, 23 * month / 9 + day + 4 + year / 4 - year / 100 + year / 400) % 7;

	switch (dayOfWeek)
	{
	case 1:
		cout << "Monday" << endl;
		break;
	case 2:
		cout << "Tuesday" << endl;
		break;
	case 3:
		cout << "Wednesday" << endl;
		break;
	case 4:
		cout << "Thursday" << endl;
		break;
	case 5:
		cout << "Friday" << endl;
		break;
	case 6:
		cout << "Saturday" << endl;
		break;
	case 7:
		cout << "Sunday" << endl;
		break;
	default:
		cout << "ERROR!" << endl;
		break;
	}

	cout << tempDay << endl;

	switch (month)
	{
	case 1:
		cout << "January" << endl;
		break;
	case 2:
		cout << "February" << endl;
		break;
	case 3:
		cout << "March" << endl;
		break;
	case 4:
		cout << "April" << endl;
		break;
	case 5:
		cout << "May" << endl;
		break;
	case 6:
		cout << "June" << endl;
		break;
	case 7:
		cout << "July" << endl;
		break;
	case 8:
		cout << "August" << endl;
		break;
	case 9:
		cout << "September" << endl;
		break;
	case 10:
		cout << "October" << endl;
		break;
	case 11:
		cout << "November" << endl;
		break;
	case 12:
		cout << "December" << endl;
		break;
	default:
		cout << "ERROR!" << endl;
		break;
	}

	cout << tempYear << endl;
brk:
	return 0;
}