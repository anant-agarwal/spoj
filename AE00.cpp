#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long sum=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(i/j>=j && i%j==0)
			sum=sum++;
			if(i/j<j)
			break;
		}
	}
	cout<<sum;
}
