#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//int sort(int a[],int len);	
int main()
{
	int n;
	//int m[100],g[100];
	vector<int>m;
	vector<int>g;
	int nm,ng;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int temp;
		cin>>ng>>nm;
		g.clear();
		m.clear();
		for(int j=0;j<ng;j++)
		{
			cin>>temp;
			g.push_back(temp);		
		}		
		for(int j=0;j<nm;j++)
		{
			cin>>temp;
			m.push_back(temp);		
		}
		sort(m.begin(),m.end());
		sort(g.begin(),g.end());
		if(m[nm-1]>g[ng-1])
		cout<<"MechaGodzilla\n";
		else
		cout<<"Godzilla\n";
		
	}
}
/*int sort(int a[],int len)
{
	for(int i=1;i<len;i++)
	{
		for(int j=0;j<len-i;j++)
		{
			if(a[j]<a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}*/
