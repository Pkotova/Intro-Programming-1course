// Problem_Celsius-to-Fahrenheit.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	double temperature, celsToFar, farToCels;
	int choice;
	
	cout << "What do you want to calculate?" << endl;
	cout << " (1).Celsius to Fahrenheit" << endl;
	cout << " (2). Fahrenheit to Celsius" << endl;
	cout << " >> ";
	cin >> choice;

	switch (choice)
	{
		case 1:
		{
			cout << "Input temperature in Celsius: ";
			cin >> temperature;
			celsToFar = ((temperature * 9 / 5) + 32);
			cout << temperature << "\370" << "C is -> " << celsToFar << "\370" << "F" << endl;
			break;
		}
		case 2:
		{
			cout << "Input temperature in Fahrenheit: ";
			cin >> temperature;
			farToCels = ((temperature - 32) * 5 / 9);
			cout << temperature << "\370" << "F is -> " << farToCels << "\370" << "C" << endl;
			break;
		}
		default:
			cout << " Wrong input" << endl;
			break;
	}
    return 0;
}

