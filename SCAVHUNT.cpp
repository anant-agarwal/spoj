#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int s,start;
		cin>>s;
		s--;
		//cout<<"s is "<<s<<"\n";
		int seq[s];
		string arr[s][2];
		for(int j=0;j<s;j++)
		{
			cin>>arr[j][0];
			cin>>arr[j][1];
		}
		int flag=0;
		for(int j=0;j<s;j++)
		{
			string x=arr[j][1];
			string x1=arr[j][0];
			for(int k=0;k<s;k++)
			{		
				if(x==arr[k][0])
				{
					seq[j]=k;
					break;	
				}
			}
			if(flag==0)
			{
				int fl=0;
				for(int k=0;k<s;k++)
				{
					if(x1==arr[k][1])
					{
						fl=1;
						break;
					}
				}
				if(fl==0)
				{
					start=j;
					flag=1;
				}
			}
		}
		int k=start;
		cout<<"Scenario #"<<i+1<<":\n";
		cout<<arr[k][0]<<"\n";
		for(int j=0;j<s;j++)
		{
			cout<<arr[k][1]<<"\n";
			k=seq[k];
		}
		cout<<"\n";
	}
}
