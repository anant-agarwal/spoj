#include<iostream>
#include<cstring>
using namespace std;
int res(string x,int len)
{
	int a[2][len+1];
	//for(int i=0;i<=len;i++)
	//{
	//	a[1][i]=0;
	//	a[0][i]=0;
	//}
	memset(a,0,sizeof(a));
	//string y;
	//cout<<"hi i came here";
	//int len=x.size();
	int cur,prev;
	for(int i=1;i<=len;i++)
	{
		if(i%2==1)
		{	cur=1;prev=0;}
		else
		{
			cur=0,prev=1;
		}
		for(int j=1;j<=len;j++)
		{
			a[cur][j]=0;
			if(x[i-1]==x[len-(j-1)-1])
				a[cur][j]=a[prev][j-1]+1;
			else
			{
				if(a[prev][j]>a[cur][j-1])
					a[cur][j]=a[prev][j];
				else
					a[cur][j]=a[cur][j-1];
			}	
			
		}
	}
	//for(int i=0;i<=len;i++)
	//{
	//	for(int j=0;j<=len;j++)
	//	cout<<a[i][j]<<" ";
	//	cout<<"\n";
	//}
	cur=len%2;
	return len-a[cur][len];
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		string x;
		cin>>x;
		cout<<res(x,x.size())<<"\n";
	}
	
}

