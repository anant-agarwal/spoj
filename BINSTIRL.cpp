#include<stdio.h>
#include<iostream>
using namespace std;
int S(long long r,long long s)
{
	
	if(r==0 && s==0)
	{
		
		return 1;
	}
	
	if(s==0 || r==0)
	{		
	return 0;}
	
	if(s%2==0)
	return S(r-1,s-1)%2;
	else
	return (s*S(r-1,s)+S(r-1,s-1))%2;
}
long long power(long long a)
{
	long long res=0;
	while(a>0)
	{
		a=a/2;
		res+=a;
			
	}
	return res;
}
int main()
{
	int d;
	cin>>d;
	for(int i=0;i<d;i++)
	{		
		long long n,m;
		//scanf("%lld%lld",&n,&m);
		cin>>n>>m;
		long long z,w,z_w;
		w=(m-1)/2;
		z=((m+1)%2==0)?n-(m+1)/2:n-(m+1)/2-1;
		z_w=z-w;
		//cout<<"z:"<<z<<" w:"<<w<<" z_w:"<<z_w<<"\n";		
		w=power(w);
		z=power(z);
		z_w=power(z_w);
		//cout<<"z:"<<z<<" w:"<<w<<" z_w:"<<z_w<<"\n";
		if(z==z_w+w)
		cout<<1;
		else
		cout<<0;
		cout<<"\n";
		//cout<<S(n%2,m%2)<<"\n";
		
	}	
}

