#include<iostream>
using namespace std;
int main()
{
	long long int m,n;
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n>>m;
		long long p,p1,p2,p3;
		p1=(2*m+2*n-3)/8;
		p2=m/2;
		p3=n/2;
		p=p1;
		if(p>p2)
		p=p2;
		if(p>p3)
		p=p3;
		m=m-2*p;
		n=n-2*p;
		if(n==0||m==0)
		{m+=2;n+=2;}
		if(n==1)
		cout<<"R";
		else
		if(n==2&&m==1)
		cout<<"D";
		else
		if(n==2&&m!=1)
		cout<<"L";
		else
		if(m==2&&n!=2)
		cout<<"U";
		else
		if(m==1)
		cout<<"D";
		else
		if(m==2)
		cout<<"U";
		cout<<"\n";
	}
}
