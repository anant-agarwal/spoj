#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	while(1)
	{
		int e,f,s,m,e1,f1,s1,m1;
		cin>>e>>f>>s>>m>>e1>>f1>>s1>>m1;
		if(e==-1 && f==-1 && s==-1 && m==-1 && e1==-1 && f1==-1 && s1==-1 && m1==-1 )
		break;
		int e2,f2,s2,m2;
		e2=ceil((double)e/(double)e1);
		f2=ceil((double)f/(double)f1);
		s2=ceil((double)s/(double)s1);
		m2=ceil((double)m/(double)m1);
		int max=e2;
		if(max<f2)
		max=f2;
		if(max<s2)
		max=s2;
		if(max<m2)
		max=m2;
		
		cout<<max*e1-e<<" "<<max*f1-f<<" "<<max*s1-s<<" "<<max*m1-m<<"\n";
		
		
	}
}
