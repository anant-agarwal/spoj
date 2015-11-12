#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int cost(int pre[101][101],int r,int s,int n,int m);
int c[101][101];
int min(int a,int b,int c);

int main()
{
	int n,m,x;
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		//pre={0};
		int pre[101][101]={0};
		cin>>n>>m;
		//int c[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>x;
				c[i][j]=x;
			}
		}
		vector<int>temp;
		///temp.clear();
		for(int i=0;i<m;i++)
		{
			int abc=c[0][i]+cost(pre,0,i,n,m);
			temp.push_back(abc);
		}
		sort(temp.begin(),temp.end());
		cout<<temp[m-1]<<"\n";
	}
}
int min(int a,int b,int c)
{
	int temp=a;
	if(temp<b)
	temp=b;
	if(temp<c)
	temp=c;
	
	return temp;	
}
int cost(int pre[101][101],int r,int s,int n,int m)
{
	if(r==n-1)
	return 0;
	if(pre[r][s]!=0)
	return pre[r][s];
	
	int p,q,t;
	q=c[r+1][s]+cost(pre,r+1,s,n,m);
	if(s==0)
	p=0;
	else
	p=c[r+1][s-1]+cost(pre,r+1,s-1,n,m);
	
	if(s==m-1)
	t=0;
	else
	t=c[r+1][s+1]+cost(pre,r+1,s+1,n,m);
	//cout<<"for"<<c[r][s]<<"@"<<r<<" "<<s<<"::"<<p<<" "<<q<<" "<<t;	
	int min_val=min(q,p,t);
	//cout<<" = "<<min_val<<"\n";
	pre[r][s]=min_val;
	return min_val;
}
