#include<iostream>

using namespace std;

void insertionsort(int ar[],int n)		//	This technique is based on concept of shifting
{
	int t,i,j;
	
	for(i=1;i<n;i++)		//	First element is in itself a sorted array
	{
		j=i-1;
		t=ar[i];
		
		while(j>=0 && ar[j]>t)		//	We can also use for loop here
		{
			ar[j+1]=ar[j];
			
			j--;
		}
		
		ar[j+1]=t;	//	j+1 because j reduced to 1 less than desired value int the last iteration of the loop
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
	
	insertionsort(ar,n);
	
	cout<<"\nSorted array - \n";
	
	for(i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
	return 0;
}

