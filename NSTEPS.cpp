#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		if(y!=x && y+2!=x)
		cout<<"No Number\n";
		else
		{
			if(x%2==0)
			{
				if(y==x)
				cout<<2*y<<"\n";
				else
				cout<<2*(y+1)<<"\n";
			}
			else
			if(x%2==1)
			{
				if(y==x)
				cout<<2*y-1<<"\n";
				else
				cout<<2*y+1<<"\n";
			}	
		}			
	}
}
