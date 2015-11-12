#include<iostream>
#include<cstring>
using namespace std;
int rev(int *,int);
int mul(int *,int,int);
int fac(int n,int a[],int len);
//int* x[101]={NULL};
//int lens[101]={0};
int main()
{
	
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		int a[250]={0};
		int num1,n;
		cin>>num1;
		n=num1;
		int i=0;
		while(num1>0)
		{
			a[i]=num1%10;
			num1/=10;
			i++;
		}
		int ans_len=fac(n,a,i);
		//x[n]=a;
		//lens[n]=ans_len;		
		//i=
		rev(a,ans_len);
		for(int j=0;j<ans_len;j++)
		cout<<a[j];
		cout<<"\n";
	}
}
int fac(int n,int a[],int len)
{
	/*if(x[n]!=NULL)
	{
		a=x[n];
		return lens[n];
	}
	return mul(a,num2,i);*/
	for(int i=1;i<n;i++)
	{
		len=mul(a,i,len);
	}
	return len;
}
int rev(int a[],int len)
{
	
	for(int i=0;i<len/2;i++)
	{
		int ch=a[i];
		a[i]=a[len-1-i];
		a[len-1-i]=ch; 	
	}
}
int mul(int a[],int n,int len)
{
	int carry=0;
	for(int i=0;i<len;i++)
	{
		int r,c;
		//cout<<a[i]<<"*"<<n<<"+"<<carry<<"\n";
		int res=a[i]*n+carry;
		//cout<<res;
		r=res%10;
		c=res/10;
		a[i]=r;carry=c;
		//cout<<"  a[i]="<<a[i]<<" carry"<<carry<<"\n";
	}
	int i=0;
	if(carry)
	{
		
		while(carry>0)
		{
			a[len+i]=carry%10;
			carry=carry/10;
			i++;
		}
	}
	return len+i;	
}
