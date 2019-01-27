#include<iostream>

using namespace std;

int main()
{
	int i,j,k,n,ar[1000],cumsum[1000]={0};  // CumSum is the cumulative sum
	int csum=0,maxsum=0,left=-1,right=-1;
	
	cout<<"Enter number of elements	-	";
	cin>>n;
	
	cin>>ar[0];
	cumsum[0]=ar[0];
	
	for(i=1;i<n;i++)
	{
		cin>>ar[i];
		cumsum[i]= cumsum[i-1]+ar[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			// checking and computin sub array sum
			
			csum=cumsum[j]-cumsum[i-1];		// Always initialise current sum to 0
			
						
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
