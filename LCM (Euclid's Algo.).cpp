#include<iostream>

using namespace std;

int gcd(int a,int b)
{
	// Base Case
	if(b==0)
	return a;
	
	// Recursive Case
	gcd(b,a%b);
}

int lcm(int a,int b)
{
	return (a*b)/gcd(a,b);		//	lcm*Gcd = a*b
}


int main()
{
	int a,b;
	int ans;
	
	cin>>a>>b;
	
	ans=lcm(a,b);
	
	cout<<ans;
	
	return 0;
}
