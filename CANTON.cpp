#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long a[t];
	for(int i=0;i<t;i++)
	cin>>a[i];

	for(int i=0;i<t;i++)
	{
		int n=1;
		while(!(a[i]<=(n*(n+1))/2 && a[i]>(n*(n-1))/2))
		{
			n++;
		}
		//cout<<"n="<<n;
		long x;		
		if(n%2==1)		
		x=a[i]-(n*(n-1))/2;
		else
		x=n+1-(a[i]-(n*(n-1))/2);
		
		//cout<<"x="<<x<<"\n";
		//for(int j=0;j<x;j++)
		
		cout<<"TERM "<<a[i]<<" IS "<<n-(x-1)<<"/"<<x<<"\n";
		
	}
}
