#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
#define ll long long
ll MOD;
vector<vector <ll> > mul(vector< vector<ll> >v1,vector< vector<ll > >v2)
{
	vector<vector<ll> >ans(v1.size());
	ll r=v1.size(), c=v2[0].size();
	for(ll i=0;i<r;i++)
	{
		for(ll j=0;j<c;j++)
		{
			ans[i].push_back(0);
			for(ll k=0;k<v2.size();k++)
			{
				ans[i][j]=(ans[i][j]+(v1[i][k]*v2[k][j])%MOD)%MOD;
			}
		}	
	}
	return ans;
}
vector<vector<ll> > pow(vector<vector<ll> >v ,ll n)
{
	if(n==1)return v;
	if(n==0)
	{
		vector<vector<ll> >ans(v.size());
		for(ll i=0;i<v.size();i++)
		{
			for(ll j=0;j<v.size();j++)
			{
				if(i==j)
				ans[i].push_back(1);
				else
				ans[i].push_back(0);
			}
		}
		return ans;
	}

	vector<vector<ll> >tmp=pow(v,n/2);
	vector<vector<ll> >tmp1=mul(tmp,tmp);
	if(n%2==0)
		return tmp1;
	else
		return mul(tmp1,v);	
}
ll cal(ll l, int n,int k)
{
	//ll MOD=pow(10,k);
	vector<vector<ll > >rr(n);
	for(int i=0;i<n;i++)
	{
		rr[0].push_back(1);
	}
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j==i-1)
				rr[i].push_back(1);
			else rr[i].push_back(0);
		}
	}
	vector<vector<ll> >t1=pow(rr,l-n+1);
	ll final=0;
	for(int i=0;i<n;i++)
	{
		final=(final+(t1[0][i]*(n-1-i))%MOD)%MOD;
	}
	return final;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		ll l;
		cin>>n>>k>>l;
		MOD=pow(10,k);
		cout<<cal(l,n,k)<<"\n";
	}
}
