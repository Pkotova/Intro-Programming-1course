// Task06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

void checkNumber(int number) //functiong for checking the number
{
	int digit;
	bool isInteresting; //flag

	while (number != 0) //split the number into digits
	{
		digit = number % 10;

		if (digit >= number / 10 % 10)
		{
			isInteresting = false;
		}
		else
		{
			isInteresting = true;
			break;
		}

		number = number / 10;
	}

	if (isInteresting) //checking the value of the flag
	{
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}

int main()
{
	int n, traychosList[100];
	cout << "How many numbers there are in Traycho's list: ";
	cin >> n;
	if (!cin)
	{
		cout << "Wrong input" << endl;
		return 1;
	}
	checkNumber(n);

	return 0;
}

