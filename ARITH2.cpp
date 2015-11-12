#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	//char a[1000];
	string a;
	int t,flag=0;
	char ch;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		a="";
		char ch;
		cin>>ch;
		while(ch!='=')
		{
			a+=ch;
			cin>>ch;
		}
		//cout<<a<<"\n";
		long long res=0,num=0;
		int i=0;
		while(a[i]>=48 && a[i]<=57)
		{
			res=res*10+a[i]-48;
			i++;
			
		}
		//cout<<res<<"\n";
		for(;i<a.size();i++)
		{
			char op=a[i];
			//cout<<op<<"\n";
			i++;
			while(a[i]>=48 && a[i]<=57)
			{num=num*10+a[i]-48;i++;}
			i--;
			if(op=='+')
			res+=num;
			else if(op=='-')
			res-=num;
			else if(op=='*')
			res*=num;
			else if(op=='/')
			res/=num;
			//cout<<num<<"\n";
			num=0;
		}
		cout<<res<<"\n";
	}
}
