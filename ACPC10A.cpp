#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	while(1)
	{
		cin>>a>>b>>c;
		if(a==0 && b==0 && c==0)
		break;
		
		if(2*b==a+c)
		{
			cout<<"AP "<<c+(b-a)<<"\n";
	
		}
		if(b*b==a*c)
		{
			cout<<"GP "<<c*c/b<<"\n";
		}
	}
}
