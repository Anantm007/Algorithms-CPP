#include<iostream>

using namespace std;

int linsearch(int a[],int n,int key)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		return i;
	}
	
	return -1;	// If no element matches the key
}

int main()
{
	int i,n,key,ar[1000];
	
	cout<<"Enter the size of array	-	";
	cin>>n;
	
	cout<<"\nEnter the elements \n";
	
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	
	cout<<"\nEnter the element to be searched	-	";
	cin>>key;
	
	int ans;
	ans=linsearch(ar,n,key);		// Calling the linear search function
	
	if(ans==-1)
	cout<<"\nElement not found!!";
	
	else
	cout<<"\nElement found at index "<<ans<<" and position "<<ans+1;
	
	return 0;
}
