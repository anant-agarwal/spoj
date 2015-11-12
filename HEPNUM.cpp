#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;
int main()
{
	while(1)
	{
		char ch;
		scanf("%c",&ch);
		vector<char>s1;
		vector<char>s2;
		while(ch!=' ')
		{
			s1.push_back(ch);
			scanf("%c",&ch);
		}
		scanf("%c",&ch);
		while(ch!='\n')
		{
			s2.push_back(ch);
			scanf("%c",&ch);
		}
		if(s1[0]=='*' && s2[0]=='*' && s1.size()==1 && s2.size()==1)
		break;
		
		/*for(long i=0;i<s1.size();i++)
		cout<<s1[i];
		cout<<"\n";
		for(long i=0;i<s2.size();i++)
		cout<<s2[i];
		*/
		vector<char>::iterator start;
		while(s1.size()>0 && s1[0]=='0')
		{
			start=s1.begin();
			s1.erase(start);
		}
	
		while(s2.size()>0 && s2[0]=='0')
		{
			start=s2.begin();
			s2.erase(start);
		}
		
		if(s1.size() > s2.size())
		{cout<<">\n";continue;}
		else
		if(s2.size() > s1.size())
		{cout<<"<\n";continue;}
		else
		if(s1.size()==0)
		{cout<<"=\n";continue;}
		else
		if(s1.size()==s2.size())	
		{
			int i=0;
			while(s1[i]==s2[i] && i<s1.size() && i<s2.size())
			i++;
			if(i==s1.size())
			cout<<"=\n";
			else	
			if(s1[i]>s2[i])
			cout<<">\n";
			else
			cout<<"<\n";	
		}
	}
}
