#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
//long n;
//long tr[2][3*100001+2];
long arr[100001];
struct node
{
	long a, b;
	long sum;
}tr[3*100001+2];
long max( long &pos ,long a=0,long b=0,long c=0,long d=0)
{
	long m=0;
	if(m<=a)
	{
		m=a;
		pos=0;
	}
	if(m<=b)
	{
		m=b;pos=1;
	}
	if(m<=c){m=c;pos=2;}
	if(m<=d){m=d;pos=3;}
	return m;
}
node solve(node x,node y)
{
	long q=0,w=0,tmp=0;
	if(tmp< x.a+x.b)
	{
		tmp=x.a+x.b;
		q=x.a;
		w=x.b;
	}
	if(tmp< x.a+y.b)
	{
		tmp=x.a+y.b;
		q=x.a;
		w=y.b;
	}	
	if(tmp< x.a+y.a)
	{
		tmp=x.a+y.a;
		q=x.a;
		w=y.a;
	}
	if(tmp< x.b+y.a)
	{
		tmp=x.b+y.a;
		q=x.b;
		w=y.a;
	}
	if(tmp< x.b+y.b)
	{
		tmp=x.b+y.b;
		q=x.b;
		w=y.b;
	}
	if(tmp< y.b+y.a)
	{
		tmp=y.b+y.a;
		q=y.b;
		w=y.a;
	}
	node ans;
	ans.sum=tmp;
	ans.a=q;
	ans.b=w;
return ans;
}
int buildtree(long i, long lo,long hi)
{
	/*if(lo==hi-1)
	{
		tr[0][i]=arr[lo];
		tr[1][i]=arr[hi];
		return 0;
	}*/
	if(lo==hi)
	{
		tr[i].a=arr[lo];
		tr[i].b=0;
		tr[i].sum=arr[lo];
		return 0;
	}
	long mid=(lo+hi)/2;
	buildtree(2*i+1,lo,mid);
	buildtree(2*i+2,mid+1,hi);
	/*long a=tr[2*i+1].a,b=tr[2*i+1].b,c=tr[2*i+2].a,d=tr[2*i+2].b;
	//cout<<"at node "<<i<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";	
	long m1=0,m2=0,m1pos=-1,m2pos=-1;
	m1=max(m1pos,a,b,c,d);
	if(m1pos==0)m2=max(m2pos,b,c,d);
	else if(m1pos==1)m2=max(m2pos,a,c,d);
	else if(m1pos==2)m2=max(m2pos,a,b,d);
	else if(m1pos==3)m2=max(m2pos,a,b,c);
	 tr[0][i]=m1;
	tr[1][i]=m2;
	*/
	tr[i]=solve(tr[2*i+1],tr[2*i+2]);
	return 0;
}
node query(long i,long lo,long hi,long st,long end)
{
	if(st>hi || end< lo)
	{
		node ans;
		ans.a=0;ans.b=0;ans.sum=0;
		
		return ans;
	}
	if(st<=lo && end>=hi )
	{
		//m1=tr[0][i];
		//m2=tr[1][i];
		return tr[i];
	}
	long mid=(lo+hi)/2;
	long a,b,c,d;
	node t1=query(2*i+1,lo,mid,st,end);
	node t2=query(2*i+2,mid+1,hi,st,end);
	/*cout<<"recieved at "<<i<<" "<<a<<" "<<b<<" "<<c<<" "<<d<<"\n";
	long m1pos=-1,m2pos=-1;
	m1=max(m1pos,a,b,c,d);
	if(m1pos==0)m2=max(m2pos,b,c,d);
	else if(m1pos==1)m2=max(m2pos,a,c,d);
	else if(m1pos==2)m2=max(m2pos,a,b,d);
	else if(m1pos==3)m2=max(m2pos,a,b,c);
//	 tr[0][i]=m1;
//	tr[1][i]=m2;
	return 0;
	*/
	return solve(t1,t2);
}
void update(long i,long lo, long hi, long pos,long x)
{
	if(lo==hi && lo==pos)
	{
		tr[i].a=x;
		tr[i].b=0;
		tr[i].sum=x;
		return ;
	}
	if( pos< lo || pos> hi)
		return ;
	long mid=(lo+hi)/2;
	update(2*i+1,lo,mid,pos,x);
	update(2*i+2,mid+1,hi,pos,x);
	tr[i]=solve(tr[2*i+1],tr[2*i+2]);
	return ;
}
int main()
{
	long n;
	cin>>n;
	for(long i=0;i<n;i++)
	scanf("%ld",&arr[i]);
	buildtree(0,0,n-1);	
	//for(int i=0;i<3*n+1;i++)
	//	cout<<i<<" "<<tr[0][i]<<" "<<tr[1][i]<<"\n"; 
	long q;
	cin>>q;
	while(q--)
	{
		char ch;long st,end;
		//scanf("%c %ld %ld",&ch,&st,&end);
		cin>>ch>>st>>end;		
		//cout<<ch<<" "<<st<<" "<<end<<"\n";
		if(ch=='Q')
		{
			//long m1,m2;
			node tmp=query(0,0,n-1,st-1,end-1);
			cout<<tmp.sum<<"\n";
		}
		else 
		{
			update(0,0,n-1,st-1,end);
		}
	}	

}
