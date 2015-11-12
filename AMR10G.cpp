#include<iostream>
#include<cstring>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int num;
	vector<long>a;
	cin>>num;
	int k,n;
	long x;
	for(int i=0;i<num;i++)
	{
		a.clear();
		cin>>n>>k;
		for(int j=0;j<n;j++)
		{
			scanf("%ld",&x);
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		long min=a[k-1]-a[0];
		for(int j=1;j<=n-k;j++)
		{
			if(min> a[k-1+j]-a[j])
			{
				min=a[k-1+j]-a[j];
			}
		}
		cout<<min<<"\n";
	}
}
