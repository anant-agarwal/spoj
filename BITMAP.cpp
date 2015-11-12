#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int tra[2][4]={0,0,1,-1, -1,1,0,0};
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int dis[182][182];
		memset(dis,-1,sizeof(dis));
		
		
		char str[183];
		queue<int>q[2];
		bool visited[182][182]={0};	
		for(int i=0;i<n;i++)
		{
			scanf("%s",str);
			for(int j=0;j<m;j++)
			{				
				if(str[j]-'0')
				{
					q[0].push(i);
					q[1].push(j);
					dis[i][j]=0;
					visited[i][j]=1;		
				}				
			}
			
		}
			while(q[0].size())
			{
				int ux=q[0].front(),uy=q[1].front();
				q[0].pop();q[1].pop();
				for(int j=0;j<4;j++)
				{
					int cx=ux+tra[0][j],cy=uy+tra[1][j];
					if(cx<n && cx>-1 &&  cy <m && cy>-1 && !visited[cx][cy])
					{
						if(dis[cx][cy]==-1 || dis[cx][cy] > dis[ux][uy]+1)
						{	
							dis[cx][cy]=dis[ux][uy]+1;
							q[0].push(cx);
							q[1].push(cy);			
									
						}
						visited[cx][cy]=1;
					}
				}
			}
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				printf("%d ",dis[i][j]);
					
			}
			printf("\n");
		}
	}
}
