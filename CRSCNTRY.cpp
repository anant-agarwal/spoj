#include<iostream>
using namespace std;
int lcs(int a[],int b[],int len_a,int len_b)
{
	int m[len_a+1][len_b+1];
	for(int i=0;i<=len_b;i++)
	m[0][i]=0;
	for(int i=0;i<=len_a;i++)
	m[i][0]=0;
	for(int i=1;i<=len_a;i++)
	{
		for(int j=1;j<=len_b;j++)
		{
			if(a[i-1]==b[j-1])
			m[i][j]=m[i-1][j-1]+1;
			else
			{
				m[i][j]=max(m[i-1][j],m[i][j-1]);
			}
		}
	}
	return m[len_a][len_b];	
}
int main()
{
	int d;
	int agnes[2000];
	cin>>d;
	for(int k=0;k<d;k++)
	{
		int x;
		cin>>x;
		int len_agnes=0;
		for(int j=0;x!=0;j++)
		{
			agnes[j]=x;
			cin>>x;
			len_agnes++;
		}
		int res=0;
		while(1)
		{
			cin>>x;
			if(x==0)
			break;
			int len_tom=0,tom[2000];
			for(int j=0;x!=0;j++)
			{
				tom[j]=x;
				cin>>x;
				len_tom++;
			}
			int lonseq=lcs(agnes,tom,len_agnes,len_tom);
			if(res<lonseq)
			res=lonseq;
			
		}
		cout<<res<<"\n";
	}
}
