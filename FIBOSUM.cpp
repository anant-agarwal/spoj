#include<iostream>
#include<vector>
#define ll long long
#define M 1000000007 
using namespace std;
long long f(ll n, ll &a, ll&b, ll&c , ll&d)
{
	if(n==1)
	{
		a=1,b=1,c=1,d=0;
		return 1;
	} 
	if(n==0)
		return 0;

	if(n%2==0)
	{
		
		ll a1,b1,c1,d1;
		f(n/2,a1,b1,c1,d1);
		a=((a1*a1)%M+(b1*c1)%M)%M;
		b=((a1*b1)%M+(b1*d1)%M)%M;
		c=((c1*a1)%M+(d1*c1)%M)%M;
		d=((c1*b1)%M+(d1*d1)%M)%M;
		return c; 
	}
	else
	{
		ll a1,b1,c1,d1,t1,t2,t3,t4;
		f(n/2,a1,b1,c1,d1);
		t1=((a1*a1)%M+(b1*c1)%M)%M;
		t2=((a1*b1)%M+(b1*d1)%M)%M;
		t3=((c1*a1)%M+(d1*c1)%M)%M;
		t4=((c1*b1)%M+(d1*d1)%M)%M;
		a=(t1+t2)%M;
		b=t1;
		c=(t3+t4)%M;
		d=t3;
		return c;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m;
		cin>>n>>m;
		//cin>>m;		
		ll a,b,c,d;
		ll ans1=f(m+2,a,b,c,d)%M, ans2=f(n+1,a,b,c,d)%M;
		ans1-=ans2;
		ans1=(ans1+M)%M;		
		cout<<ans1<<"\n";
		//cout<<f(m,a,b,c,d)<<"\n";
	}
}

