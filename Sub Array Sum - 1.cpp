#include<iostream>

using namespace std;

int main()
{
	int i,j,k,n,ar[1000];
	int csum=0,maxsum=0,left=-1,right=-1;
	
	cout<<"Enter number of elements	-	";
	cin>>n;
	
	for(i=0;i<n;i++)
	cin>>ar[i];
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			// checking and computing sub array sum
			
			csum=0;		// Always initialise current sum to 0
			
			for(k=i;k<=j;k++)
			{
				csum+=ar[k];
			}
			
			if(csum>maxsum)
			{
				maxsum=csum;
				left=i;
				right=j;
			}
		}
	}
	
	cout<<"\n\nMaximum sum	=	"<<maxsum;
	cout<<"\nArray is	=	";
	
	for(int r=left;r<=right;r++)
	cout<<ar[r]<<",";
	
	return 0;	
	
}
