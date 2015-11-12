#include<iostream>
using namespace std;
int main()
{
	int n;
	int tot;
	while(1)
	{
		cin>>n;
		if(n==-1)
		break;
		tot=4*n-1;
		for(int i=0;i<n;i++)
		{
			int noc=1+4*i;
			for(int j=0;j<(tot-noc)/2;j++)	
				cout<<" ";
				
			for(int j=0;j<noc;j++)
			{
				if(j%4==0)cout<<"_";
				if(j%4==1)cout<<"/";
				if(j%4==2)cout<<" ";
				if(j%4==3)cout<<"\\";
			}
			cout<<"\n";
		}	
		
		for(int i=0;i<2*n;i++)
		{
			for(int j=0;j<tot;j++)
			{
				if(i%2==0)
				{
					if(j%4==0 )cout<<"/";
					if(j%4==1 )cout<<" ";
					if(j%4==2 )cout<<"\\";
					if(j%4==3 )cout<<"_";
				}
				else
				{
					if(j%4==0 )cout<<"\\";
					if(j%4==1 )cout<<"_";
					if(j%4==2 )cout<<"/";
					if(j%4==3 )cout<<" ";
				}
			}	
			cout<<"\n";
		}
			
		for(int i=n-2;i>=0;i--)
		{
			int noc=3+4*i;
			for(int j=0;j<(tot-noc)/2;j++)	
			cout<<" ";
				
			for(int j=0;j<noc;j++)
			{
				if(j%4==0)cout<<"\\";
				if(j%4==1)cout<<"_";
				if(j%4==2)cout<<"/";
				if(j%4==3)cout<<" ";
			}
			cout<<"\n";
		}
		cout<<"***\n";
	}
}
