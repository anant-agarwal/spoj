#include<iostream>
using namespace std;
int main()
{
	long n;
	long arr[100000];
	int i;
	int notamb[1000];
	for(i=0;;i++)
	{
		cin>>n;
		if(n==0)
		break;
		for(long j=0;j<n;j++)
			cin>>arr[j];
		int flag=0;
		for(long k=0;k<n;k++)
		{
			if(arr[arr[k]-1]!=k+1)
			{flag=1;break;}
		}
		notamb[i]=flag;	
	}	
	for(int k=0;k<i;k++)
	{
		if(notamb[k]==1)
		cout<<"not ambiguous\n";
		else
		cout<<"ambiguous\n";
	}
}
