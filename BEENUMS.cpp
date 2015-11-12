#include<iostream>
using namespace std;
int main()
{
	long n;
	while(1)
	{
		cin>>n;
		if(n==-1)
		break;
		
		long sum=1;
		for(int i=0;sum<n;i++)
		{
			sum+=i*6;
		}
		if(sum==n)
		cout<<"Y\n";
		else
		cout<<"N\n";
	}
}
