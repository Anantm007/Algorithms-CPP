#include<iostream>

using namespace std;

int binary_search(int ar[],int l,int u,int key)
{
	if(l>u)
    return -1;
	
    int m=(l+u)/2;

	if(ar[m]==key)
	return m;

    else if(ar[m]>key)
	return binary_search(ar,l,u-1,key);

    else
    return binary_search(ar,l+1,u,key);
}

int main()
{
	int n,ar[10000];
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	cin>>ar[i];

    int key;
	cin>>key;
	
	cout<<endl<<binary_search(ar,0,n-1,key);
	
	return 0;
}
