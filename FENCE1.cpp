#include<iostream>
#include<cstring>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	double l;
	double area;
	long a;
	while(1)
	{
		cin>>l;
		if(l==0)
		break;
		area=(l*l/2)/3.14159265358;
		a=area*1000;
		if(a%10>=5)
		a=a+10;
		a=a/10;
		cout<<a/100<<".";	
		int mod=a%100;
		if(mod<10)
		cout<<"0";
		
		cout<<mod<<"\n";
		
	}
}
