#include<iostream>
#include<vector>
#include<queue>
#include<cstdio>
using namespace std;
vector<int>x[10001];
int d[10001];
int c[10001];
int dfs(int,int);
int main()
{
	int n,a,b;
	cin>>n;
	for(int i=0;i<n-1;i++)
	{
		scanf("%d%d",&a,&b);
		x[a].push_back(b);
		x[b].push_back(a);
	}
	int dis=0;
	
	d[1]=0;
	dfs(1,1);
	int temp=0,pt=1;
	for(int j=1;j<=n;j++)
	{
		if(temp<d[j])
		{temp=d[j];pt=j;}
	}
	d[pt]=0;
	dfs(pt,0);
	temp=0;
	for(int j=1;j<=n;j++)
	{
		if(temp<d[j])
		temp=d[j];
	}
	

	//if(endpts.size()==1)dis=2;	
	cout<<temp;
	
}
int dfs(int u,int newc)
{
	c[u]=newc;
	int len=x[u].size();
	for(int i=0;i<len;i++)
	{
		if(c[x[u][i]]!=newc)
		{
			d[x[u][i]]=d[u]+1;
			dfs(x[u][i],newc);		
		}
	}
}
