#include "stdafx.h"
#include<iostream>

using namespace std;
int main()
{

	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if (a>b)
	{
		if (b>c)
		{

			cout << a << " " << b << " " << c << endl;
		}
		else
		{
			cout << a << " " << c << " " << b << endl;
		}
	}
	if (b>c)
	{
		if (c>a)
		{
			cout << b << " " << c << " " << a << endl;
		}
		else
		{
			cout << b << " " << a << " " << c << endl;
		}
	}
	if (c>b)
	{
		if (b>a)
		{
			cout << c << " " << b << " " << a << endl;
		}
		else
		{
			cout << c << " " << a << " " << b << endl;
		}
	}
	if (b<c)
	{
		if (c<a)
		{
			cout << b << " " << c << " " << a << endl;
		}
		else
		{
			cout << b << " " << a << " " << c << endl;
		}
	}
	if (a<b)
	{
		if (b<c)
		{
			cout << a << " " << b << " " << c << endl;
		}
		else
		{
			cout << a << " " << c << " " << b << endl;
		}
	}
	if (c<b)
	{
		if (b<a)
		{
			cout << c << " " << b << " " << a << endl;
		}
		else
		{
			cout << c << " " << a << " " << b << endl;
		}
	}

	return 0;

}