#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long tot[n];
	int nf[n];
	int st[n][1000];
	for(int i=0;i<n;i++)
	{
		cin>>tot[i]>>nf[i];
		for(int j=0;j<nf[i];j++)
		cin>>st[i][j];	
	}
	for(int i=0;i<n;i++)
	{
		long total=tot[i];
		for(int k=1;k<nf[i];k++)
		{
			for(int j=0;j<nf[i]-k;j++)
			{
				if(st[i][j]<st[i][j+1])
				{
					int temp=st[i][j];
					st[i][j]=st[i][j+1];
					st[i][j+1]=temp;
				}
			}
		}
		
		int k=0;
		long sum=0;
		while(k<nf[i] && sum<total)
		{
			sum+=st[i][k];
			k++;
		}
		if(sum<total)
		cout<<"Scenario #"<<i+1<<":\n"<<"impossible\n\n";
		else
		cout<<"Scenario #"<<i+1<<":\n"<<k<<"\n\n";
	}
}
