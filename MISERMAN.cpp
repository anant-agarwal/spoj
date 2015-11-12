#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int cost(int r,int s,int n,int m);
int c[101][101];
int min(int a,int b,int c);
int main()
{
	int n,m,x;
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
		int abc=c[0][i]+cost(0,i,n,m);
		temp.push_back(abc);
	}
	sort(temp.begin(),temp.end());
	cout<<temp[0]<<"\n";
}
int min(int a,int b,int c)
{
	int temp=a;
	if(temp>b)
	temp=b;
	if(temp>c)
	temp=c;
	return temp;
}
int cost(int r,int s,int n,int m)
{
	if(r==n-1)
	return 0;
	int p,q,t;
	q=c[r+1][s]+cost(r+1,s,n,m);
	if(s==0)
	p=32767;
	else
	p=c[r+1][s-1]+cost(r+1,s-1,n,m);
	
	if(s==m-1)
	t=32767;
	else
	t=c[r+1][s+1]+cost(r+1,s+1,n,m);
	//cout<<"for"<<c[r][s]<<"@"<<r<<" "<<s<<"::"<<p<<" "<<q<<" "<<t;	
	int min_val=min(q,p,t);
	//cout<<" = "<<min_val<<"\n";
	return min_val;
}
