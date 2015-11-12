#include<iostream>
#include<queue>
using namespace std;
int main()
{
	long long n;
	long long a[40];
	long long temp=1;
	int level=0;	
	//long x;
	while(1)
	{
	//	x=1;
		cin>>n;
		if(n==0)
		break;
		temp=1;
		level=0;
		for(int i=0;;i++)
		{
			temp<<=1;
			if(temp-1>=n)
			break;
			level++;
		}
		//cout<<"level="<<level<<"\n";
		a[level]=n-1;
		for(int i=level-1;i>=0;i--)
		{
			a[i]=(a[i+1]-1)/2;
		}
		int num=1,den=1;
		for(int i=1;i<=level;i++)
		{
			if(a[i]%2==1)
			{
				num=num;
				den=num+den;
			}
			if(a[i]%2==0)
			{
				den=den;	
				num=num+den;
			}
		}
		cout<<num<<"/"<<den<<"\n";
	//	getnum(n);
	}
}

