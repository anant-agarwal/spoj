#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long lin1=0,lin2=0,lastlin1=0,lastlin2=0;
	int a,b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a<b)
		{
			int temp=a;
			a=b;
			b=temp;
		}
		long v1,v2,v3,v4;
		v1=lin1+b;
		v3=lin1+a;
		if(lastlin1!=0)
		{
			v1+=abs(lastlin1-a);
			v3+=abs(lastlin1-b);
		}
		v2=lin2+b;
		v4=lin2+a;
		if(lastlin2!=0)
		{
			v2+=abs(lastlin2-a);
			v4+=abs(lastlin2-b);
		}
		lastlin1=a;
		lastlin2=b;
		if(v1>v2)
		lin1=v1;
		else
		lin1=v2;
		if(v3>v4)
		lin2=v3;
		else
		lin2=v4;		
	}
	if(lin2>lin1)
	cout<<lin2;
	else
	cout<<lin1;
}
