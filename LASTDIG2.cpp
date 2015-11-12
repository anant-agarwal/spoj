#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
	int t;
	cin>>t;
	char a[1001];
	long long b;
	for(int i=0;i<t;i++)
	{
		cin>>a>>b;
		int x=b%4;
		int l=a[strlen(a)-1];
		l=l-48;
		if(strlen(a)==1 && a[0]=='0')
		cout<<'0';
		else if(b==0)
		cout<<1;
		else if(x==0)
		cout<<(l*l*l*l)%10;
		else if(x==1)
		cout<<l;
		else if(x==2)
		cout<<(l*l)%10;
		else if(x==3)
		cout<<(l*l*l)%10;
	
		cout<<"\n";	
	}
}
