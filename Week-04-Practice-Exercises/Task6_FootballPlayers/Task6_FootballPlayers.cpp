// Task6_FootballPlayers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	int footballPlayerN, position;

	do
	{
		cout << "Check Footballer: ";
		cin >> footballPlayerN;
	} while (!(footballPlayerN >= 1 && footballPlayerN <= 99));

	position = footballPlayerN % 10; 

	switch (position)
	{
	
	case 1:
		if (footballPlayerN == 11)
		{
			cout << "Striker" << endl;
		}
		else cout << "Goalkeeper" << endl;
		break;
	case 2:
	case 3:
	case 4:
		cout << "Protector" << endl;
		break;
	case 5:
	case 6:
	case 7:
	case 8:
		cout << "Half" << endl;
		break;
	case 0:
	case 9:
		cout << "Striker" << endl;
		break;
	default: cout << "Wrong input" << endl;
		break;
	}

    return 0;
}

