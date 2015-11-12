#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	char a[200];
	char b[200];
	int len;
	int chance;
	while(1)
	{
		cin>>n;
		if(n==0)
		break;
		cin>>a;
		len=strlen(a);
//		if()
		chance=len/n;
		int k=0;
		for(int i=0;i<chance;i++)
		{
			if(i%2==0)
			{
				for(int j=i*n;j<i*n+n;j++)
				{
					b[k++]=a[j];
				}
			}
			else
			{
				for(int j=i*n+n-1;j>=i*n;j--)
					b[k++]=a[j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<len;j=j+n)
			{
				cout<<b[j];
			}
		}
		cout<<"\n";

	}
}
