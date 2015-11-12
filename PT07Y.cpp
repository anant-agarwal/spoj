#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	if(m!=n-1)
	cout<<"NO";
	else
	{
		vector<int>e[10000];
		for(int i=0;i<m;i++)
		{
			int x,y;
			cin>>x>>y;
			e[x-1].push_back(y);
			e[y-1].push_back(x);
		}
		int siz=e[0].size();	
		int visited[10000]={0};
		int parent[10000];
		parent[0]=-1;
		visited[0]=1;
		queue<int>q;
		q.push(1);
		int fl=0;
		while(q.size()!=0)
		{
			int u=q.front();
			q.pop();
			int s=e[u-1].size();
			for(int i=0;i<s;i++)
			{
				if(e[u-1][i]!=parent[u-1])
				{
					if(visited[e[u-1][i]-1]==1)
					{fl=1;break;}
					visited[e[u-1][i]-1]=1;
					parent[e[u-1][i]-1]=u;
					q.push(e[u-1][i]);
				}
			}
			if(fl==1)
			break;
		}
		for(int i=0;i<n;i++)
		if(visited[i]!=1)
		{fl=1;break;}
		if(fl==1)
		cout<<"NO";
		else
		cout<<"YES";
	}
}
