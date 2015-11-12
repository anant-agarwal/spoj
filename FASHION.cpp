#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int nop[n];
	int b[n][1000];
	int g[n][1000];
	for(int i=0;i<n;i++)
	{
		cin>>nop[i];
		for(int j=0;j<nop[i];j++)
		cin>>b[i][j];
		for(int j=0;j<nop[i];j++)
		cin>>g[i][j];
	}	
	for(int i=0;i<n;i++)
	{
		for(int k=1;k<nop[i];k++)
		{
			for(int j=0;j<nop[i]-k;j++)
			{
				if(b[i][j]<b[i][j+1])
				{
					int temp=b[i][j];
					b[i][j]=b[i][j+1];
					b[i][j+1]=temp;
				}
				if(g[i][j]<g[i][j+1])
				{
					int temp=g[i][j];
					g[i][j]=g[i][j+1];
					g[i][j+1]=temp;
				}
			}
		}
		long sum=0;
		for(int k=0;k<nop[i];k++)
		{
			sum=sum+b[i][k]*g[i][k];
		}
		cout<<sum<<"\n";
	}
}
