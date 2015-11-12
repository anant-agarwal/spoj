#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[32000];
	for(int i=2;i<32000;i++)
	{
		int flg=0;
		for(int j=2;j<i;j++)
		{
			if(a[j] && i%j==0)
			{
				a[i]=0;
				flg=1;
				break;
			}
		}
		if(!flg)
		a[i]=1;
	}
//for(int i=0;i<32000;i++)
//if(a[i])
//cout<<i<<"\n";
	int noftest;
	cin>>noftest;
	long limits[noftest][2];
	for(int i=0;i<noftest;i++)
	{
		cin>>limits[i][0];
		cin>>limits[i][1];
	}
	int k=0;
	char arr[100001];
	while(k<noftest)
	{
		long m;
		long n;
		//cin>>m>>n;
		//noftest--;
		m=limits[k][0];
		n=limits[k++][1];		
		if(m==1)
		m=2;
		/*for(long i=m;i<=n;i++)
		{
			if (a[i]==1 && 0<i<32000)
			cout<<i<<"\n";
			else
			{
				int asd=sqrt(i)+1;
				int flag=0;
				for(long j=2;j<asd && 0<j<32000;j=j+j)
				{
					if(a[j] && i%j==0)
					{
						a[i]=0;
						flag=1;
						break;
					}
				}
				if(flag!=1)
				{
					cout<<i<<"\n";
					a[i]=1;
				}
			}
		}*/
		for(int i=0;i<100001;i++)
		arr[i]=0;		
		for(int i=2;i<32000;i++)
		{
			if(i>sqrt(n)+1)
				break;				
			if(a[i])
			{
				long start;
				if(i>=m)
				start=2*i;
				else
				start=m+(i-m%i)%i;
				for(long j=start;j<=n;j=j+i)
				{
					//cout<<j-m<<"\n";
					arr[j-m]=1;
				}
			}
		}
		for(long i=m;i<=n;i++)
		{
			//cout<<i-m<<"\n";
			if(!arr[i-m])
			cout<<i<<"\n";
		}
		cout<<"\n";

	}
}

