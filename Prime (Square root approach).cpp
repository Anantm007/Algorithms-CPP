#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int n;
	int f=0;
	
	cin>>n;
	
	for(int i=2;i<=sqrt(n);i++)		//	All divisors > (root of n )are multiples of divisors < (root of n)
	{
		if(n%i==0)
		f=1;
	}
	
	if(f==1)
	cout<<"Not Prime";
	
	else
	cout<<"Prime";
	
	return 0;
}
