// LinQ.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	//ax + b = 0;
	int a, b;
	cin >> a;
	if (!cin)
	{
		cout << "Wrong Input" << endl;
		goto brk;
	}
	cin >> b;
	if (!cin)
	{
		cout << "Wrong Input" << endl;
		goto brk;
	}

	if (a == b == 0)
	{
		cout << "INF" << endl;
	}
	else if(a != 0 && b !=0) {
		cout << (-b)/a << endl;
	}
	else cout << "NO" << endl;

	brk:
    return 0;
}

