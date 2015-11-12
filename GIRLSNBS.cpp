#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	while(1)
	{
		int g,b;
		cin>>g>>b;
		if(g==-1 && b==-1)
		break;
		
		float s,l;
		int s1,l1;
		if(g>b)
		s1=s=b;
		else
		s1=s=g;
		l1=l=g+b-s;
		/*if(s==0)
		cout<<l;
		else
		if(s==1)
		cout<<ceil(l/2);
		else
		if(l1%(s1+1)==0)
		cout<<(int)l1/s1;
		else
		cout<<ceil(l/s);
		cout<<"\n";*/
		cout<<ceil(l/(s+1));
		cout<<"\n";
	}
}
