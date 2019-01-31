#include<iostream>

using namespace std;

void fact(int);
int multiply(int,int [],int);

int main()
{
	int n;
	
	cout<<"Enter a number	-	";
	cin>>n;
	
	cout<<"\n\nFactorial	=	";
	fact(n);
	
	return 0;
}

void fact(int n)
{
	int result[5000]={1};
	
	int size=1;
	
	for(int i=2;i<=n;i++)
	size=multiply(i,result,size);
	
	for(int i=size-1;i>=0;i--)
	cout<<result[i];
	
}

int multiply(int n,int result[],int size)
{
	int carry=0,prod;
	int i;
	
	for(i=0;i<size;i++)
	{
		prod=result[i]*n+carry;
		result[i]=prod%10;
		carry=prod/10;
	}
	
	while(carry)
	{
		result[size++]=carry%10;
		carry=carry/10;
	}
	
	return size;
}

