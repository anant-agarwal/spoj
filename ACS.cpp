#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int row[1234],col[5678];
	for(int i=0;i<1234;i++)
	{
		row[i]=i+1;
		col[i]=i+1;
	}
	for(int i=1234;i<5678;i++)
	{
		col[i]=i+1;
	}
	char ch;
	while(scanf("%c",&ch)!=EOF)
	{
		if(ch=='R'||ch=='C')
		{
			int a,b;
			cin>>a>>b;
			if(ch=='R')
			{
				int x=row[a-1];
				row[a-1]=row[b-1];
				row[b-1]=x;
			}
			if(ch=='C')
			{
				int x=col[a-1];
				col[a-1]=col[b-1];
				col[b-1]=x;
			}
		}
		else
		if(ch=='Q')
		{
			int a,b;
			cin>>a>>b;
			long res=(row[a-1]-1)*5678+col[b-1];
			cout<<res<<"\n";
		}
		else
		if(ch=='W')
		{
			long a;
			cin>>a;	
			int r,c;
			r=a/5678;
			r++;
			c=a%5678;
			if(c==0)
			{
				c=5678;
				r--;
			}
			for(int i=0;i<1234;i++)
			{
				if(row[i]==r)
				{
					r=i+1;
					break;
				}
			}
			for(int i=0;i<5678;i++)
			{
				if(col[i]==c)
				{
					c=i+1;
					break;	
				}
			}
			cout<<r<<" "<<c<<"\n";
		}
	}
}
