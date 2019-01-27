#include<iostream>

using namespace std;


int kadane(int ar[],int n)
{
	int i,j,cs=0,ms=0;
	
	for(i=0;i<n;i++)
	{
		cs+=ar[i];
		
		if(cs<0)
		cs=0;
		
		if(cs>ms)
		ms=cs;
	}
	
	
	return ms;
}

int main()
{
	int i,j,n,ar[10000];
	int s1,s2;
	
	cout<<"Enter total number of elements	-	";
	cin>>n;
	
	cout<<"\nEnter the elements \n";
	for(i=0;i<n;i++)
	cin>>ar[i];
	
	s1=kadane(ar,n);
	
	int cumsum=0;
	for(i=0;i<n;i++)
	{
		cumsum+=ar[i];
		
		ar[i]*=-1;
	}
	
	s2=cumsum-(-kadane(ar,n));  // Calling Kadane's algo on new array
	
	
	cout<<"\n\nMaximum Sum in Linear Sub-Array 	=	"<<s1<<endl;
	cout<<"\nMaximum Sum in Circular Sub-Array	=	 "<<max(s1,s2)<<endl;
	
	return 0;
	
	
}


