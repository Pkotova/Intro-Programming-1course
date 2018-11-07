#include<iostream>
using namespace std;
int main()
{
	int minutes,hourOnTheWatch = 0,minutesOnTheWatch=0;
	cin>>minutes;
	
	hourOnTheWatch = minutes / 60;
	minutesOnTheWatch = minutes % 60; //minutes - hourOnTheWatch*60;

	if(hourOnTheWatch > 23)
	{
		hourOnTheWatch = hourOnTheWatch - 24;
	}
	cout<<hourOnTheWatch<<endl;
	cout<<minutesOnTheWatch<<endl;
	
	return 0;
}
