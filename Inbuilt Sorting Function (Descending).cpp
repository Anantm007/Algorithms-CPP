#include<iostream>
#include<algorithm> 	//	For inbuilt sort function which sorts in ascending order

using namespace std;

bool mycomp(int a,int b)		//	To sort in descending order
{
	return a>b;
}

int main()
{
	int ar[]={5,7,6,1,8,9,10,100,45,500};
	int n;
	
	n=sizeof(ar)/sizeof(int);
	
	sort(ar,ar+n,mycomp);		//	Third parameter is optional (passed here for descending order)
	
	for(int i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
	cout<<endl<<endl;
	
	
	sort(ar,ar+n);				//	The inbuilt sort function (ascending)
		
	for(int i=0;i<n;i++)
	cout<<ar[i]<<" ";
	
	return 0;
}
