#include<iostream>

using namespace std;

long long fastpower(int a,int b)
{
	if(b==0)
	return 1;
	
	if(b%2==0)		// b is even
	return fastpower(a,b/2)*fastpower(a,b/2);
	
	else
	return a*fastpower(a,b/2)*fastpower(a,b/2);
	
		
}

int main()
{
	int a,b;
	
	cin>>a>>b;
	
	cout<<endl<<endl<<endl<<fastpower(a,b);
	
	return 0;
}
