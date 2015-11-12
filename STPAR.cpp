#include<iostream>
#include<stack>
using namespace std;
int main()
{
	
	int d;
	int a[1000];
	while(1)
	{
		cin>>d;
		if(d==0)
		break;
		for(int i=0;i<d;i++)
		{
			cin>>a[i];
		}
		int count=0,fl=0;
		stack<int>s;	
		for(int i=0;i<d;i++)
		{
			/*if(count+1==a[i])
			{
				count++;
				continue;
			}
			if(count+1!=a[i])
			{
				while(!s.empty() && s.top()<a[i])
				{
					if(s.top()!=count+1)
					{
						fl=1;
						break;
					}
					
					s.pop();	
					
					count++;
					
				}
				if(a[i]==count+1)
				{	
					count++;			
				}
				else
				{s.push(a[i]);}
			}
			if(fl==1)
			break;
			*/
			while(!s.empty() && count+1==s.top())
			{
				//cout<<"poping "<<s.top()<<"\n";
				s.pop();count++;
			}
			//cout<<"pushing "<<a[i]<<"\n";
			s.push(a[i]);
		}
		while(!s.empty())
		{
			if(s.top()!=count+1)
			{fl=1;break;}
			s.pop();
			count++;
		}
		if(fl)cout<<"no\n";
		else
		cout<<"yes\n";
		
	}
}
