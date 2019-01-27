#include<iostream>

using namespace std;


void merge(int ar[],int s,int e)
{
	int m=(s+e)/2;
	int j=m+1;
	int i=s;
	int temp[100000];
	int k=s;
	
	while(i<=m && j<=e)
	{
		if(ar[i]<ar[j])
		temp[k++]=ar[i++];
		
		else
		temp[k++]=ar[j++];
	}
	
	while(i<=m)
	temp[k++]=ar[i++];
	
	while(j<=e)
	temp[k++]=ar[j++];
	
	for(i=s;i<=e;i++)
	ar[i]=temp[i];
	
}
void merge_sort(int ar[],int s,int e)
{
	if(s>=e)
	return;
	
	//Step 1. Divide
	int m=(s+e)/2;
	
	//Step 2. Sort Recursively
	merge_sort(ar,s,m);
	merge_sort(ar,m+1,e);
	
	//Step 3. Merge the two arrays
	merge(ar,s,e);

}


int main()
{
	int ar[100000],n,i;
	
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>ar[i];
	
	merge_sort(ar,0,n-1);
	
	for(i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
	return 0;
}
