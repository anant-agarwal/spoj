#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int k;
	cin>>k;
	char a[1000001];
	char b[1000001];
	for(int i=0;i<k;i++)
	{
		cin>>a;
		//strcpy(b,"");
		//cout<<b;
		int o=0;
		while(b[o]!='\0')
		{
			b[o]='\0';
			o++;
		}
		int len=strlen(a);
		for(int j=0;j<len/2;j++)
		{
			b[len-1-j]=b[j]=a[j];
			
		}
		if(len%2==1)
		b[len/2]=a[len/2];
		//cout<<"Initially b::"<<b<<'\n';
		if(strcmp(b,a)>0)
		{
			//cout<<"b is greater than a\n";
			cout<<b<<"\n";
		}
		else
		{
			int sum,c;int h;
			if(len%2==1)h=len/2;
			else
			h=len/2-1;
			sum=b[h]-48+1;
			c=sum/10;
			
			sum=sum%10;
			b[h]=sum+48;
			while(c>0 && h>0)
			{
				sum=c+b[--h]-48;
				c=sum/10;
				sum%=10;
				b[h]=sum+48;				
			}
			for(int v=0;v<len/2;v++)
				b[len-1-v]=b[v];
			if(c>0 && h==0)
			{
				b[len-1]='1';
				cout<<'1'<<b<<"\n";
			}			
			else
			cout<<b<<"\n";
		}
	}
}
