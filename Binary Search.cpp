#include<iostream>
#include<algorithm>		//	For sorting the array as binary search works only on sorted array

using namespace std;


int binarysearch(int ar[],int n,int search)
{
	int i;
	int l,u,m;
	
	l=0;
	u=n-1;
	
	while(l<=u)
	{
		m=(u+l)/2;
		
		if(ar[m]==search)
		return m;
		
		else if(ar[m]<search)  	//	Move to the right
		l=m+1;	
		
		
		else if(ar[m]>search)	//	Move to the left
		u=m-1;
	}
	
	return -1;
	
	
}

int main()
{
	int n,ar[1000];
	int i;
	int search;
	int ans;
	
	cout<<"Enter number of elements		-	";
	cin>>n;
	
	cout<<"\nEnter the elements			-	\n";
	for(i=0;i<n;i++)
	cin>>ar[i];
	
	cout<<"\nEnter the element to be searched	-	";
	cin>>search;
	
	sort(ar,ar+n);		//	Binary search works only on sorted array
	
	ans=binarysearch(ar,n,search);
	
	if(ans==-1)
	cout<<"\nElement not found!!";
	
	else
	cout<<"\nElement found at index "<<ans<<" and position "<<ans+1;
	
	return 0;
}
