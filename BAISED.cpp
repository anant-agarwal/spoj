#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		string s;
		long long rank;
		long long n;
		vector<long long>list;
		cin>>n;
		for(long long i=0;i<n;i++)
		{
			cin>>s;
			cin>>rank;
			list.push_back(rank);
		}
		sort(list.begin(),list.end());
		long long res=0;
		for(long long i=0;i<n;i++)
		{
			res+=abs(i-list[i]+1);
			//cout<<i-list[i]+1<<"\n";
		}
		cout<<res<<"\n";
	}
}
