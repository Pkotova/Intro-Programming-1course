// Problem10_Combinations.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int main()
{
	int n,k, factn = 1,factk = 1;
	cin >> n;

	//calc n!
	for (int i = 1; i <= n; i++)
	{
		factn *= i;
	}
	cin >> k;
	//cals k!
	for (int i = 1; i <= k; i++)
	{
		factk *= i;
	}
	
	cout << factn / factk << endl;
    return 0;
}

