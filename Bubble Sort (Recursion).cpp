#include<iostream>

using namespace std;

void bubble_sort(int ar[],int j,int n)
{
    // Base Case
    if(n==1)
    return;

    if(j==n-1)
    {
        j=0;
        bubble_sort(ar,j,--n);
    }

    if(ar[j]>ar[j+1])
    swap(ar[j],ar[j+1]);

    
    bubble_sort(ar,++j,n);

    return;
}

int main()
{
	int n,ar[10000];
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	cin>>ar[i];

    bubble_sort(ar,0,n);
	
	for(int i=0;i<n;i++)
    cout<<ar[i]<<" ";

    
    return 0;
}
