#include<iostream>

using namespace std;

int main()
{
	int i,j,n,ar[1000];
	int cs=0,ms=0;
	
	cout<<"Enter total number of elements	-	";
	cin>>n;
	
	cout<<"\nEnter the elements \n";
	
	for(i=0;i<n;i++)
		cin>>ar[i];
	
	// Kadane's algorithm to find maximum sub-array sum
	
	for(i=0;i<n;i++)
	{
		cs+=ar[i];
		
		if(cs<0)
		cs=0;
		
		if(ms<cs)
		ms=cs;
	}
	
	cout<<"\n\nMaximum sub array sum is		-	"<<ms;
	
	return 0;
}
