#include<iostream>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++)
	{
		long long count,x,sum=0;
		cin>>count;
		for(long long j=0;j<count;j++)
		{
			cin>>x;
			sum=sum+x%count;
			sum%=count;
		}
		sum%=count;
		if(sum==0)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
