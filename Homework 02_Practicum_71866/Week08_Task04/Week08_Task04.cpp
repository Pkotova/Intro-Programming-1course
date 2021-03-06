// Week08_Task04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.

bool  isPrime(int n)
{
	bool ifPrime = false;

	for (int i = 2; i <= n / 2; i++) 
	{
		if (n % i == 0) 
		{
			ifPrime = true;
			break;
		}
	}
	return isPrime ? true : false;

}
bool PrimePaired(int a, int b)
{
	return (isPrime(a) && isPrime(b) && (a + 2 == b));
}

int main()
{	
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout <<"The numbers are prime paired: " <<boolalpha<<PrimePaired(a,b)<< endl;
    return 0;
}

