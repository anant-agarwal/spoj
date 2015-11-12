#include<iostream>
#include<cstdio>
#include<vector>
#include<cstdlib>
#include<cstring>
using namespace std;
long dp[80][150][150]={0};
long cal(string acro,vector<string>sentence,int s,int t,int k)
{
	int len=sentence.size();
	int acro_len=acro.size(),count=0;
	
	
	if(k>=acro_len && s==len)
	return 1;

	if(k>=acro_len && s<=len-1)
	return 0;

	if(s>=len || k>=acro_len)
	return 0;
	
	if(t>=sentence[s].size())
		return 0;			
	if(dp[s][t][k]!=-1)
	return dp[s][t][k];
	
	long ans=0;	
	int word_len=sentence[s].size();
	for(int i=t,j=k;j<acro_len && i<word_len;i++)
	{	
		//cout<<acro[j]<<" "<<sentence[s][i]<<"\n";
		if(tolower(acro[j])==sentence[s][i])
		{
			count++;j++;
			//cout<<"calling "<<s<<" "<<i+1<<" "<<k+count<<"\n";
			ans+=cal(acro,sentence,s,i+1,k+count);
			//cout<<"calling "<<s+1<<" "<<0<<" "<<k+count<<"\n";		
			ans+=cal(acro,sentence,s+1,0,k+count);
			//cout<<"calling "<<s<<" "<<i+1<<" "<<k<<"\n";
			ans+=cal(acro,sentence,s,i+1,k);
			break;		
		}
	}
	//(dp+s)[k]=ans;
	//cout<<"returning "<<ans<<" on "<<s<<" "<<t<<" "<<k<<"\n";
	dp[s][t][k]=ans;
	return ans;
}
int main()
{
	int n;
			
//	long dp[80][150][150]={0};
	while(1)
	{
		cin>>n;
		vector<string>forbidden;
		if(n==0)break;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			forbidden.push_back(s);
		}
		while(1)
		{

			//vector<string>acro;
			vector<string>sentence;
			string acro;
			cin>>acro;
			//acro.push_back(s);
			string s;
			getchar();		
			getline(cin,s);
			//string x;		
			//getline(cin,x);
			int len=s.size();
			for(int i=0;i<len;i++)
			{
				string tmp="";
				while(i<len && s[i]!=' ')
				{
					tmp+=s[i];
					i++;
				}
				int flag=0;
				for(int j=0;j<n;j++)
				{
					if(tmp==forbidden[j])
					{flag=1;break;}
				}
				if(!flag)
				sentence.push_back(tmp);
				//cout<<tmp<<"\n";
			}
			if(acro=="LAST" && sentence[0]=="CASE")
				break;
			//int dp[80][150][150];
			memset(dp,-1,sizeof(dp));
			long ans=cal(acro,sentence,0,0,0);
			if(ans==0)
			{
				cout<<acro<<" is not a valid abbreviation\n";
			}
			else cout<<acro<<" can be formed in "<<ans<<" ways\n";
		}
	}
}
