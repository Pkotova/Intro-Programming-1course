// Task04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

bool ChechingCoupon(int coupon)
{
	int counter = 0, digits[100], digit, i = 0,countFives = 0;
	while (coupon)
	{
		counter++;
		digit = coupon % 10;
		coupon = coupon / 10;
		digits[i] = digit;
		i++;
	}
	for (int i = 0; i < counter; i++)
	{
		if (digits[i] == 5)
		{
			countFives++;
		}
	}
	if (countFives == 3)
	{
		return true;
	}
	else return false;
}

int main()
{
	int choice, balance = 5,coupon;

	do {
		cout << "__________________" << endl;
		cout << "    Your menu" << endl;
		cout << "1. You balance" << endl;
		cout << "2. Add in your balance" << endl;
		cout << "3. Exit" << endl;
		cout << "__________________" << endl;
		cout << " >>";
		cin >> choice;

		switch (choice)
		{
		case 1:
		{
			cout << "-------------------" << endl;
			cout << "- Your balance: " << balance << endl;
			cout << "-------------------" << endl;
			break;
		}

		case 2:
		{
			cout << "-------------------" << endl;
			cout << " >> Coupon code: ";
			cin >> coupon;
			cout << "-------------------" << endl;
			if (ChechingCoupon(coupon))
			{
				balance += 10;
			}
			else cout << "Invalid coupon" << endl;

			break;
		}

		case 3: return 1;

		default:
			cout << "Invalid input! " << endl;
			break;
		}

	} while (choice);
	

	cout << endl;
    return 0;
}

