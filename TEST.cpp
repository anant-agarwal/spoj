#include<iostream>
using namespace std;
int main()
{
	int a[10000];
	for(int i=0;i<10000;i++)
	{	
		cin>>a[i];
		if(a[i]==42)
			break;
	}
	for(int i=0;a[i]!=42;i++)
		cout<<a[i]<<"\n";	
}
