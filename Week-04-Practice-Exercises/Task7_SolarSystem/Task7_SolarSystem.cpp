// Task7_SolarSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int planet;

	do
	{
		cout << "Check Planet: ";
		cin >> planet;
	} while (!(planet >= 0 && planet <= 9));

	switch (planet)
	{
	
	case 1:
		cout << "Mercur" << endl;
		break;
	case 2:
		cout << "Venus" << endl;
		break;
	case 3:
		cout << "Earth" << endl;
		break;
	case 4:
		cout << "Mars" << endl;
		break;
	case 5:
		cout << "Jupiter" << endl;
		break;
	case 6:
		cout << "Saturn" << endl;
		break;
	case 7:
		cout << "Uranus" << endl;
		break;
	case 8:
		cout << "Neptune" << endl;
		break;
	case 9:
		cout << "Pluton" << endl;
		break;
	default:cout << "Wrong input:" << endl;
		break;
	}
    return 0;
}

