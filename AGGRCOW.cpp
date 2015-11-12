#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
bool check(vector<long>v,long dis,long c)
{
	long len=v.size();
	long count=1;long j=v[0];
	for(long i=1;i<len;i++)
	{
		//long tmp=0;
		//while(i<len && tmp<dis)
		//{
		//	tmp+=v[i+1]-v[i];
		//	i++;
		//}
		
		//for(j=i+1;j<len && v[j]-v[i]<dis;j++);
		//if(j<len && v[j]-v[i]>=dis)
		//{
		//cout<<j<<"\n";
		//count++;
		//}
		//i=j;
		if(v[i]-j>=dis)
		{
			count++;
			j=v[i];
		}
		if(count==c)break;
	}
	if(count==c)
	{	//cout<<"returning 0@"<<dis<<"\n";
	return 0;}
	else{//cout<<"returning 1@"<<dis<<"\n";
	 return 1;}
}
int main()
{
	int t;
	
	cin>>t;
	for(int q=0;q<t;q++)
	{
		long n,c;
		cin>>n>>c;
		vector<long>v;	
		for(long i=0;i<n;i++)
		{
			long x;
			scanf("%ld",&x);
			v.push_back(x);	
		}
		sort(v.begin(),v.end());
		long ans=0;
		long lo=0,hi=1000000000;
		while(lo<=hi)
		{
			long mid=(lo+hi)/2;
			if(!check(v,mid,c))
			{
				lo=mid+1;
				ans=mid;
			}
			else
			hi=mid-1;
		}
		//if(!check(v,hi,c))printf("%ld\n",hi);
		//else printf("%ld\n",lo); 
		printf("%ld\n",ans);	
		//check(v,3,3);
	}
	
}

