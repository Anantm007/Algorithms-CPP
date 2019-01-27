#include<iostream>

using namespace std;

int gcd(int a,int b)
{
		//	Base case
		if(b==0)
		return a;
		
		// Recursive case
		gcd(b,a%b);	
}


int main()
{
	int a,b;
	int ans;
	
	cin>>a>>b;
	
	ans=gcd(a,b);
	
	cout<<ans;
	
	return 0;
}
