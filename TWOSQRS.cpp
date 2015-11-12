#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
//	vector<long long>sqr;
	int n;
	cin>>n;
	long long temp,root;
	long long x,residue;
	for(int p=0;p<n;p++)
	{
		
		scanf("%lld",&x);
		root=sqrt(x/2);
		long long root1=sqrt(x);
		//root=sqrt(root);
		int flag=0;
		for(long long i=root;i<=root1;i++)
		{
			
			residue=x-i*i;
			temp=sqrt(residue);		
			if(temp*temp==residue)
			{
				flag=1;
				break;	
			}
		}
		if(flag==1)
		printf("Yes\n");
		else
		printf("No\n");
	}
}
