// Task2_Continents.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int continent;

	do
	{
		cout << "Check continent: ";
		cin >> continent;
	} while (!(continent >= 0 && continent <= 6));
	switch (continent)
	{
	case 0:
		cout << "Africa" << endl;
		break;
	case 1:
		cout << "North America" << endl;
		break;
	case 2:
		cout << "South America" << endl;
		break;
	case 3:
		cout << "Europe" << endl;
		break;
	case 4:
		cout << "Antarctica" << endl;
		break;
	case 5:
		cout << "Oceania" << endl;
		break;
	case 6:
		cout << "Asia" << endl;
		break;
	default:cout << "Wrong input:" << endl;
		break;
	}

    return 0;
}

