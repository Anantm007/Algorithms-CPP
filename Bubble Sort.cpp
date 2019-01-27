#include<iostream>

using namespace std;

void bubblesort(int ar[],int n)
{
	int i,j,t;
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				t=ar[i];
				ar[i]=ar[j];
				ar[j]=t;
			}
		}
	}
}

int main()
{
	int n,i,ar[1000];
	
	cout<<"\nEnter total number of elements		-	";
	cin>>n;
	
	cout<<"\nEnter the elements \n";
	
	for(i=0;i<n;i++)
	cin>>ar[i];
	
	bubblesort(ar,n);
	
	cout<<"\nSorted array - \n";
	
	for(i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
	return 0;
}
