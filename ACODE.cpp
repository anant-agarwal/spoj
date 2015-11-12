#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
long long Store[5001];
long long S(int count,int fl)
{
	//cout<<"S("<<count<<")";
	
	if(fl==0)
	{
		if(count==1)
		{return 2;}
		if(count==2)
		return 3;
		if(Store[count]==0)	
		Store[count]=S(count-1,0)+S(count-2,0);
		return Store[count];
	}
	else if(fl)
	{
		if(count==1 || count==2)
		return 1;
		if(Store[count-2]==0)
		Store[count-2]=S(count-2,0);
		return Store[count-2];
	}
}
int main()
{
	
	while(1)
	{
		char a[5001]={'0'},b[5001]={'0'};
		cin>>a;
		int len=strlen(a);
		if(len==1 && a[0]=='0')
		break;
		for(int i=0;i<len-1;i++)
		{
			if(a[i]=='0')
			b[i]='0';
			else
			if(a[i]=='1')
			b[i]='1';
			else
			if(a[i]=='2' && a[i+1]<'7')
			b[i]='1';
			else
			b[i]='0';
		}
		for(int i=0;i<5001;i++)
		Store[i]=0;
		long long res=1;
		int i=0,count=0,fl=0;
		while(i<len)
		{
			count=0;
			fl=0;
			while(b[i]=='1')
			{
				count++;
				i++;
			}
			//puts(b);
			if(a[i]=='0')
			fl=1;
			if(count>0)
			{//cout<<count;
			res*=S(count,fl);}
			i++;
		}
		cout<<res<<"\n";
	}	
}
