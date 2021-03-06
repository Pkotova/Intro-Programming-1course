#include "stdafx.h"
#include<iostream>
using namespace std;

//Petya Kotova fn:71866 2gr.

double Pow(double n, int k)
{
	int pow = 1;
	for (int i = 0; i < k; i++)
	{
		pow *= n;
	}

	return pow;
}

double h(int a, int b, int n)
{
	return (b - a) / n;
}

double fx(int x)
{
	return Pow(x, 3) - 5 * x;
}

double  CalculatinIntegral(int a, int b, int n)
{
	double x = a + h(a, b, n);
	double sum = ((h(a, b, n)) / 2)*(fx(a) + fx(x)); // the sum starts from h/2(f(a)+f(a+h)

	for (int i = 1; i <=  n; i++)
	{
		double xi = x + h(a, b, n);
		double xii = xi + h(a, b, n);

		sum += ((h(a, b, n)) / 2)*(fx(xi) + fx(xii));
		//updade the value of the variables 
		x = xi;
		xi = xii;
	}
	return sum;
}


int main()
{
	int a, b, n;

	cout << "Calculating SUM = h/2(f(xi)+ f(xi+1)) (i = 0,1,...,n-1)" << endl;

	cout << "a = ";
	cin >> a;
	if (!cin)
	{
		cout << "Wrong input" << endl;
		return 1;
	}
	do
	{
		cout << "b (should be grater than a) = ";
		cin >> b;
		if (!cin)
		{
			cout << "Wrong input" << endl;
			return 1;
		}
	} while (!(b > a));
	do
	{
		cout << "n = ";
		cin >> n;
		if (!cin)
		{
			cout << "Wrong input" << endl;
			return 1;
		}
	} while (!(n > 0));
	
	cout <<"Result: " << CalculatinIntegral(a, b, n) << endl;

    return 0;
}

