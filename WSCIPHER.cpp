#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>g1[2];
	vector<int>g2[2];
	vector<int>g3[2];
	string txt;
	while(1)
	{
		int  k1,k2,k3;
		cin>>k1>>k2>>k3;
		if(k1==0 && k2==0 && k3==0)
		break;		
		for(int i=0;i<2;i++)
		{
			g1[i].clear();	
			g2[i].clear();
			g3[i].clear();
		}
		cin>>txt;
		int len=txt.size();
		for(int i=0;i<len;i++)
		{
			if(txt[i]<='i' && txt[i]>='a')
			{
				g1[0].push_back(txt[i]);
				g1[1].push_back(i);
			}
			else
			if(txt[i]<='r' && txt[i]>='j')
			{
				g2[0].push_back(txt[i]);
				g2[1].push_back(i);
			}
			else
			{
				g3[0].push_back(txt[i]);
				g3[1].push_back(i);
			}
		}
		
		for(int i=0;i<k1;i++)
		{
			g1[1].push_back(g1[1][0]);
			g1[1].erase(g1[1].begin());
		}
		
		for(int i=0;i<k2;i++)
		{
			g2[1].push_back(g2[1][0]);
			g2[1].erase(g2[1].begin());
		}
		for(int i=0;i<k3;i++)
		{
			g3[1].push_back(g3[1][0]);
			g3[1].erase(g3[1].begin());
		}
		int l1=g1[1].size(),l2=g2[1].size(),l3=g3[1].size();
		for(int i=0;i<l1;i++)
		{	
			txt[g1[1][i]]=g1[0][i];
		}
		for(int i=0;i<l2;i++)
		txt[g2[1][i]]=g2[0][i];
		for(int i=0;i<l3;i++)
		txt[g3[1][i]]=g3[0][i];
		cout<<txt<<"\n";
	}
}
