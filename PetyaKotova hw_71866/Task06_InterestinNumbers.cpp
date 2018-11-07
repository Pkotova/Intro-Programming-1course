#include<iostream>
using namespace std;

void checkNumber(int number)
{
	int digit,n;
	bool isInteresting;
	n = number;
	while (number != 0 )
	{
		digit = number % 10;
		if (digit >= number / 10 % 10)
		{
			isInteresting = true;
		}
		else
		{
			isInteresting = false;
			break;
		}
		number = number / 10;
	}

	if (isInteresting)
	{
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}
void inputInTraychosList()
{

}
int main()
{
	int n, traychosList[100];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> traychosList[i];
	}
	for (int i = 0; i < n; i++)
	{
		checkNumber(traychosList[i]);
	}
    return 0;
}


