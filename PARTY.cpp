#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
	while(1)
	{
		int b,n;
		cin>>b>>n;
		if(b==0 && n==0)break;
		vector<int>p[2];		
		for(int i=0;i<n;i++)
		{
			int a,f;
			scanf("%d%d",&a,&f);
			p[0].push_back(a);
			p[1].push_back(f);
		}
		long dp[501][101]={0};
		for(int i=1;i<=b;i++)
		{
			for(int j=1;j<=n;j++)
			{
				//cout<<i<<" "<<j<<"\n";
				long t1=0;
				if(i-p[0][j-1]>=0)
				t1=dp[i-p[0][j-1]][j-1]+p[1][j-1];	
				
				dp[i][j]=max(t1,dp[i][j-1]);
				//cout<<dp[i][j]<<" ";
				
			}
			//cout<<"\n";
		}	
		int i;
		for(i=b;i>=0 && dp[i][n]==dp[b][n];i--);
		cout<<i+1<<" "<<dp[b][n]<<"\n";
	}
}

