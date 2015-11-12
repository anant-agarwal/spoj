#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	long b;
	int a;
	int ld[t];
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;
		if(b==0)
		{
			ld[i]=1;
			continue;
		}
		if(a==0)
		{
			ld[i]=0;
			continue;
		}
		int temp=b%4;
		if(temp==0)
		temp=4;
		long res=pow(a,temp);
		res=res%10;
		ld[i]=res;
	}
	for(int i=0;i<t;i++)
	cout<<ld[i]<<"\n";
	
}
