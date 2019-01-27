#include<iostream>
#include<algorithm>

using namespace std;

void countingsort(int ar[],int n)
{
	int f[1000]={0},i,j,k=0;
	int out[1000];
	
	int *max=max_element(ar,ar+n);	// max_element returns a pointer to maximum value of array
	
	for(i=0;i<n;i++)		// Create the frequency(count) array
	f[ar[i]]++;
	
	for(i=0;i<=*max;i++)
	{
		if(f[i]>0)
		{
					
			while(f[i]>0)
			{
				out[k++]=i;	// Create the output array by traversing frequency array
				f[i]--;		// For repetitive elements
			}
		
		}
	}
	
	for(i=0;i<n;i++)
	ar[i]=out[i];
}

int main()
{
	int n,i,ar[1000];
	
	cout<<"\nEnter total number of elements		-	";
	cin>>n;
	
	cout<<"\nEnter the elements \n";
	
	for(i=0;i<n;i++)
	cin>>ar[i];
	
	countingsort(ar,n);
	
	cout<<"\nSorted array - \n";
	
	for(i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
	return 0;
}
