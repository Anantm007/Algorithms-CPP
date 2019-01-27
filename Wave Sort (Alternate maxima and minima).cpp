// This is not a coventional sort algorithm that sorts array in ascending or descending order
// Our motive in this program is to create alternate maxima and minima


#include<iostream>

using namespace std;

void wavesort(int ar[],int n)
{
	int i,j;
	
	for(i=0;i<n;i+=2)	// Go to every second element and try to create peak
	{
		if(i>0 && ar[i]<ar[i-1])
		swap(ar[i],ar[i-1]);
		
		if(i<n-1 && ar[i]<ar[i+1])
		swap(ar[i],ar[i+1]);
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
	
	wavesort(ar,n);
	
	cout<<"\nDesired array - \n";		// Alternate maxima and minima
	
	for(i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
	return 0;
}

