#include<bits/stdc++.h>

using namespace std;

void selectionsort(int ar[],int n)		//	This technique is based on swapping lowest element with current element
{
	int i,j,t,minindex;
	
	for(i=0;i<n-1;i++)
	{
		minindex=i;
		
		for(j=i+1;j<n;j++)
		{
			if(ar[j]<ar[minindex])
			minindex=j;
		}
		
		swap(ar[minindex],ar[i]);
		
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
	
	selectionsort(ar,n);
	
	cout<<"\nSorted array - \n";
	
	for(i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
	return 0;
}

