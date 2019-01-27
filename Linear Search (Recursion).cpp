#include<iostream>

using namespace std;

int linear_search(int ar[],int n,int i,int key)
{
	if(i==n)
    return -1;
	
	if(ar[i]==key)
	return i;
	
	linear_search(ar,n,++i,key);
}

int main()
{
	int n,ar[10000];
	
	cin>>n;
	
	for(int i=0;i<n;i++)
	cin>>ar[i];

    int key;
	cin>>key;
	
	cout<<endl<<linear_search(ar,n,0,key);
	
	return 0;
}
