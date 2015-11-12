#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int a[1000];
	int i;
	for(i=0;;i++)
	{
		cin>>a[i];
		if(a[i]==0)
		break;		
	}
	long res=0;
	for(int j=0;j<i;j++)
	{
		int n=a[j];
		res=(n*(n+1)*(2*n+1))/6;
		cout<<res<<"\n";
	}
}
