#include<iostream>
using namespace std;
int main()
{
	int number, counter = 0;
	do
	{
		cin>>number;
		if(number >= 0)
		{
			counter++;
		}	
	}while(!(number < 0));
	
	cout<<counter<<endl;
	return 0;
}
