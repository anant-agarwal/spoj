#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#define ll long long
#define l long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x,y;
		cin>>x>>y;
		l lo=0,hi=y.size()/x.size()+1,ans=0;
		while(lo<=hi)
		{
			l mid=(lo+hi)/2;
			l xlen=x.size(),ylen=y.size();
			l count=0,j=0;
			for (l i=0;i<ylen && j<xlen;i++)
			{

				if(y[i]==x[j])count++;
				if(count>=mid)
				{j++;count=0;}
			}
			if(j>=xlen)
			{
				ans=mid;
				lo=mid+1;
			}
			else
				hi=mid-1;
			
		}
		cout<<ans<<"\n";
	}
}
