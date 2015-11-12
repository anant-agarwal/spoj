#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#define ll long long
using namespace std;
ll mat[100][100][2];
ll ma(string s,int l,int u)
{
	if(l==u)
		return s[l]-'0';
	
	if(mat[l][u][0]!=-1)
		return mat[l][u][0];

	ll  max=0;

	for(int k=l+1;k<u;k++)
	{
		if(s[k]<'0' || s[k]>'9')
		{
			ll t1=ma(s,l,k-1);
			ll t2=ma(s,k+1,u);
			if(s[k]=='*')t1=t1*t2;
			else 
			t1+=t2;
			if(max<t1)
				max=t1;
		}
	}
	mat[l][u][0]=max;
	return max;
}

ll mi(string s,int l,int u)
{
	if(l==u)
		return s[l]-'0';
	if(mat[l][u][1]!=-1)
		return mat[l][u][1];

	ll min=-1;

	for(int k=l+1;k<u;k++)
	{
		if(s[k]<'0' || s[k]>'9')
		{
			ll t1=mi(s,l,k-1);
			ll t2=mi(s,k+1,u);
			if(s[k]=='*')t1*=t2;
			else t1+=t2;
			if(min>t1 || min==-1)
				min=t1;
		}
	}
	mat[l][u][1]=min;	
	return min;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		memset(mat,-1,sizeof(mat));
		cout<<ma(s,0,s.size()-1)<<" "<<mi(s,0,s.size()-1)<<"\n";
	}
}
