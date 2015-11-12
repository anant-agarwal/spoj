#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	
	cin>>n;
	vector<long>v[4];
	for(int q=0;q<n;q++)
	{
		long a;
		for(int i=0;i<4;i++)
		{
			scanf("%ld",&a);
			v[i].push_back(a);
		}
	}
	vector<long>p;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			p.push_back(v[0][i]+v[1][j]);
		}
	}
	sort(p.begin(),p.end());
	long long count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			long su=v[2][i]+v[3][j];
			su=0-su;			
			long lo=0,hi=n*n-1,low_l=-1,hi_l=-1;
			while(lo<=hi)
			{
				long mid=(lo+hi)/2;
				if(p[mid]<su)lo=mid+1;
				else
				{
					if(p[mid]==su)low_l=mid;
					hi=mid-1;
				}
			}
			lo=0;hi=n*n-1;
			while(lo<=hi)
			{
				long mid=(lo+hi)/2;
				if(p[mid]>su)hi=mid-1;
				else
				{
					if(p[mid]==su)hi_l=mid;
					lo=mid+1;
				}
			}
			if(low_l!=-1 && hi_l!=-1)
			{
				count+=hi_l-low_l+1;
			}
		}
	}
	cout<<count<<"\n";
}

