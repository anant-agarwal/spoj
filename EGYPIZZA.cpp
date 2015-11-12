#include<iostream>
using namespace std;
int a,b,c,f;

int main()
{
	int t;
	cin>>t;
	a=0,b=0,c=0,f=0;
	string x;
	for(int i=0;i<t;i++)
	{
		cin>>x;
		if(x=="1/4")
		{
			a++;
		}
		else if(x=="1/2")
			b++;
		else if(x=="3/4")
			c++;
	}
	if(c>a)
	{
		c=c-a;
		f=f+a;
		f=f+b/2;
		b%=2;
		f=f+b+c+1;
	}
	else
	{
		a=a-c;
		f+=c;
		if(a>2*b)
		{
			a=a-2*b;
			f+=b;
			f+=a/4;
			if(a%4!=0)
			f++;
		}
		else
		{
			b=b-a/2;
			f+=a/2+b/2;
			if(a%2==1 || b%2==1)
			f++;
		}
		f=f+1;
	}
	cout<<f<<"\n";

}

