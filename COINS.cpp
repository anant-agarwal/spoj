#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
long long ans[1000000];
long long cal(long x)
{
	if(x<1000000 && ans[x]!=-1)
	return ans[x];

	if(x==0)return 0;
	
	long long a1=cal(x/2)+cal(x/3)+cal(x/4);
	if(a1<x)
	a1=x;
	
	if(x<1000000)
	ans[x]=a1;
	//cout<<"returning "<<a1<<"@"<<x<<"\n";
	return a1;
}
int main()
{
	long x;
	
	while(scanf("%ld",&x)!=EOF)
	{
		memset(ans,-1,sizeof(ans));
		cout<<cal(x)<<"\n";	
	}
}

