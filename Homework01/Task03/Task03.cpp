// Task03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

// Petya Kotova - 71866 , 2group, Information systems

int main()
{
	int number, sum = 0, counter = 0, copy, temp; // copy and temp are helping variables, they save the value of inputted number
	 
	cout << "Enter Your Number: ";
	cin >> number; 
	if (!cin) //check if the inputted is a number
	{
		cout << "Wrong input" << endl;
		return 0;
	}
	copy = number;
	temp = number;

	while (number) // split the number into digits
	{
		counter++; //counts digits 
		number = number / 10;	
		cout << digit << endl;
	}
		
	while (copy)
	{
		digit = copy % 10;
		copy = copy / 10;
		sum += pow(digit, counter); // using pow because its one digit number on power one digit number 
	}
	
	if (temp == sum)
	{
		cout << "Yes, it's narcistic!" << endl;
	}
	else cout << "No, it is not narcistic! " << endl;

    return 0;
}

