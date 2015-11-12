#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	long long a,b,c,res;
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld %lld %lld",&a,&b,&c);
		res=a*a-2*b;
		cout<<res<<"\n";
	}
}
