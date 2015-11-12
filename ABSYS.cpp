#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int ismach(char a[])
{
	int len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		return 1;
	}
	return 0;
}
int main()
{
	char a[1000],b[1000],c[1000];
	char ch;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		cin>>ch;
		cin>>b;
		cin>>ch;
		cin>>c;
		int y,z;
		//cout<<a<<ch<<b<<ch<<c<<"\n";
		int x;
		if(ismach(a))
		{
			y=atoi(b);
			z=atoi(c);
			x=z-y;
	
		}
		else
		if(ismach(b))
		{
			x=atoi(a);
			z=atoi(c);
			y=z-x;
		}
		else
		if(ismach(c))
		{
			x=atoi(a);
			y=atoi(b);
			z=x+y;
		}
	
		cout<<x<<" + "<<y<<" = "<<z<<"\n";	
	}
}
