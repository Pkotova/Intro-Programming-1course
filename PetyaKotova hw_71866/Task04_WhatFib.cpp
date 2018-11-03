#include<iostream>
using namespace std;
int main()
{
	long long n, t1 = 0, t2 = 1, nextTerm = 0, fibonaci[100],number,position;
	bool partOf = true;
	cin>>number;
	fibonaci[0] = 0;
	fibonaci[1] = 1;
	fibonaci[2] = 1;
	 for (int i = 3; i <= 20; ++i)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        fibonaci[i] = nextTerm;
    }
  	 for (int i = 0; i <= 20; ++i)
    {
    	if(fibonaci[i] == number)
    	{
    		position = i;
    		partOf = true;
    		break;
		}
		else partOf = false;
    }
    brk:
	if(partOf)
	{
		cout<<position<<endl;
	}
	else
	{
		cout<<-1<<endl;
	}
    
	return 0;
}
