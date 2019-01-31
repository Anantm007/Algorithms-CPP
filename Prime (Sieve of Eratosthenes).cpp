/*#include<iostream>

using namespace std;

void prime_sieve(int l,int u)
{
	int ar[100000]={0};
	int i;
	
	ar[0]=ar[1]=0;
	ar[2]=1;
	
	for(i=3;i<10000;i+=2)		//	Initially assume that all numbers (indices) are prime (boolean array)
	ar[i]=1;						//	Even numbers cannot be prime
	
	for(i=3;i<10000;i+=2)
	{
		if(ar[i]!=0)
		{
			for(int j=i*i;j<=10000;j+=2*i)
			ar[j]=0;
		}
	}
	
	for(i=l;i<=u;i++)
	{
		if(ar[i]!=0)
		cout<<i<<" ";
	}
}

int main()
{
	int l,u;
	
	cin>>l>>u;
	
	if(u>l)
		prime_sieve(l,u);
	
	else
	cout<<"Wrong Input!!";
	
	
	return 0;
}*/

#include<iostream>

using namespace std;

int main()
{
    int n;

    cin>>n;
    
  	int ar[10000]={0};
	int i;
	
	ar[0]=ar[1]=0;
	ar[2]=1;
	
	for(i=3;i<10000;i+=2)		//	Initially assume that all numbers (indices) are prime (boolean array)
	ar[i]=1;						//	Even numbers cannot be prime
	
	for(i=3;i<10000;i+=2)
	{
		if(ar[i]!=0)
		{
			for(int j=i*i;j<=10000;j+=2*i)
			ar[j]=0;
		}
	}

	for(i=2;i<100;i++)
	if(ar[i])
	cout<<i<<" ";
	
	cout<<endl;
    
    int ans;
	int k=0;
	
    for(int i=2;i<10000;i++)
    {
		
		if(ar[i]!=0)
		{
         k++;
         
        	 if(k==n)
        	 {
	       		cout<<i;
	       		break;
			}
		
		}
        
    }
    

    return 0;
}
