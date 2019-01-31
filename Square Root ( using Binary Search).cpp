#include<iostream>
#include<algorithm>

using namespace std;

float sqroot(int n,int p)
{
	// We will first find integer part
	
	int l=0,u=n-1,m;
	float ans;
	int i;
		
	while(l<=u)
	{
		m=(u+l)/2;
		
		if(m*m==n)
		{
			ans=m;
			return ans;
			break;
		}
		
		if(m*m<n)
		{
			ans=m;
			l=m+1;
		}
		
		else
		u=m-1;
	}
	
	
	// Decimal Part ( Uses Linear Search)
	
	float inc=0.1;
	
	for(i=0;i<p;i++)
	{
		while(ans*ans<=n)
		{
			ans+=inc;
		}
		
		// ans*ans>n
		
		ans-=inc;		//	Because of last iteration
		
		inc/=10;	//	Increase precision i.e. 0.1 then 0.01 then 0.001 and so on
		
	}
	
	return ans;
	
}



int main()
{
	int n,p;
	float ans;
	
	cout<<"Enter the number	-	";
	cin>>n;
	
	cout<<"\nEnter the decimal places	-	";		// Precision of decimal places
	cin>>p;
	
	ans=sqroot(n,p);
	
	cout<<"\n\nAnswer is	=	"<<ans;
	return 0;
}
