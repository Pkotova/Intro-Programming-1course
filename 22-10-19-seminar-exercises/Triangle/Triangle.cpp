// Triangle.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	do {
		cin >> a;
	} while (a < 0);
	do {
		cin >> b;
	} while (a < 0);
	do {
		cin >> c;
	} while (a < 0);

	if (a + b > c || a + c > b || c + b > a ) // neravenstvo na triugulnika
	{
		cout << "Exist" << endl;
	}
	else cout << "No" << endl;
    return 0;
}

