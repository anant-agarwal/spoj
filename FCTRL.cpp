#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long t;
	cin>>t;
	long a[t];
	for(int i=0;i<t;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<t;i++)
	{
		//int k=1;
		int count=0;
		//cout<<"a[i]:::"<<a[i]<<"\n";		
		while(a[i])
		{
			a[i]=a[i]/5;			
			count=count+a[i];
			
		}
		cout<<count<<"\n";
	}
}
