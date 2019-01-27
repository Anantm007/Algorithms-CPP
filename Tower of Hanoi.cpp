#include<iostream>

using namespace std;

void tower_of_hanoi(int n,char s,char d,char helper)
{
	if(n==0)
	return;
	
	// First Step --> N-1 disk from source to helper
	tower_of_hanoi(n-1,s,helper,d);
	
	cout<<"Move "<<n<<" disk from "<<s<<" to "<<d<<endl;
	
	tower_of_hanoi(n-1,helper,d,s);
}

int main()
{
	int n;
	
	cin>>n;
	
	tower_of_hanoi(n,'A','C','B');
	
	return 0;	
} 
