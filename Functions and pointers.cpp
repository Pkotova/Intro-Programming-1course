// Functions and pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


void justSwap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
void mySwap(int& a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void yourSwap(int * a, int * b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int sum(int* arr, int sz)
{
	int sum = 0;
	for (int i = 0; i < sz; i++)
	{
		sum += arr[i];
	}
	return sum;
}

void reverse(int * arr, int sz)
{
	for (int i = 0; i < sz / 2; i++)
	{
		swap(arr[i], arr[sz - i - 1]);
	}
}
void print(int * arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		cout << arr[i] << endl;
	}
}
int main()
{
	int a = 6, b = 3;
	mySwap(a, b);
	cout <<"Adresses: " <<a << b << endl;
	justSwap(a, b);
	cout << "Basic: "<<a << b << endl;
	yourSwap(&a, &b);
	cout <<"Pointers: "<< a << b << endl;


	int myAddress = 6;
	int *myPtr; //= &myAddress;
	cout << &myPtr << endl;
	//cout << *myPtr << endl;


	cout << endl;
	int myArray[3] = {3,2,4};
	cout << sum(myArray, 3) << endl;
	cout << endl;
	reverse(myArray, 3);
	print(myArray, 3);

}
