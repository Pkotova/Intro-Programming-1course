// Week09_Pointers_Task05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
//Petya Kotova fn 71866
using namespace std;

const int SIZE = 50;

void CutVowels(char sequence[SIZE],int size)
{
	for (int i = 0; i < size; i++)
	{
		if (sequence[i] != 'a' && sequence[i] != 'e'&&
			sequence[i] != 'o' && sequence[i] != 'i'&&
			sequence[i] != 'u' && sequence[i] != 'y')
		{
			cout << sequence[i] << " ";
		}
	}
}

int main()
{
	char sequence[SIZE];
	int size;
	cout << "Input sequence lenght: ";
	cin >> size;
	cin.get();
	cin.getline(sequence, 256);
	CutVowels(sequence, size);
	cout << endl;
    return 0;
}

