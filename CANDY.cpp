#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	int a[10000];
	int ans[100];
	long sum=0;
	int mov;
	for(i=0;;i++)
	{
		cin>>n;
		if(n==-1)
		break;
		sum=0;
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
			sum=sum+a[j];
		}
		if(sum%n==0)
		{
		//	cout<<"sum="<<sum<<"\n";
			sum=sum/n;
		//	cout<<"sum="<<sum<<"\n";
			mov=0;
			for(int j=0;j<n;j++)
			{
				if(a[j]<sum)
				mov=mov+sum-a[j];
			}
			
		}
		else
		{
			mov=-1;
		//	ans[i]=-1;
		}
		//cout<<"mOv="<<mov<<"\n";
		ans[i]=mov;
		//cout<<"mOv="<<ans[i]<<"\n";
	}
	//cout<<i;
	for(int j=0;j<i;j++)
	{
		cout<<ans[j]<<"\n";
	}
}
