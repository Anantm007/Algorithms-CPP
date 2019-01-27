#include<iostream>

using namespace std;

int partition(int ar[],int s,int e)
{
	int i=s-1;
	int j=s;
	int pivot=ar[e];
	
	for(j;j<e;j++)
	{
		if(ar[j]<=pivot)
		{
			i++;
			swap(ar[i],ar[j]);	
		}	
	}
	
	// Bring pivot element to its sorted position
	swap(ar[i+1],ar[e]);
	
	return i+1;	//	Pivot element index
	
	
}

void quick_sort(int ar[],int s,int e)
{
	if(s>=e)	//	Already Sorted
	return;
	
	int p=partition(ar,s,e);
	
	quick_sort(ar,s,p-1);	// 	Left part 
	quick_sort(ar,p+1,e);	//	Right part
	
}

int main()
{
	int n,ar[10000],i;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>ar[i];
	
	quick_sort(ar,0,n-1);
	
	for(i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
	return 0;
}
