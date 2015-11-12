#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int getnum(string a)
{
	//cout<<"recieved"<<a<<"\n";
	if(a=="063")
	return 0;
	if(a=="010")
	return 1;
	if(a=="093")
	return 2;
	if(a=="079")
	return 3;
	if(a=="106")
	return 4;
	if(a=="103")
	return 5;
	if(a=="119")
	return 6;
	if(a=="011")
	return 7;
	if(a=="127")
	return 8;
	if(a=="107")
	return 9;
	else
	cout<<"error\n";
	return -1;
}
string getcode(int a)
{
	if(a==0)
	return "063";
	if(a==1)
	return "010";
	if(a==2)
	return "093";
	if(a==3)
	return "079";
	if(a==4)
	return "106";
	if(a==5)
	return "103";
	if(a==6)
	return "119";
	if(a==7)
	return "011";
	if(a==8)
	return "127";
	if(a==9)
	return "107";
	else
	cout<<"error\n";
	return "";
}
int main()
{
	string a,num1="",num2="";
	while(1)
	{
		num1="",num2="";
		cin>>a;
		if(a=="BYE")
		break;
		int len=a.size();
		int i=0;
		while(a[i]!='+')	
		{
			num1+=a[i];	
			i++;
		}
		i++;
		while(a[i]!='=')
		{
			num2+=a[i];
			i++;
		}
		//cout<<num1<<" "<<num2<<"\n";
		string temp="";
		int num_1=0;
		for(int i=0;i<num1.size();i=i+3)
		{
			temp=num1[i+0];
			temp+=num1[i+1];
			temp+=num1[i+2];
			num_1=num_1*10+getnum(temp);
		}	
		int num_2=0;
		for(int i=0;i<num2.size();i=i+3)
		{
			temp=num2[i+0];
			temp+=num2[i+1];
			temp+=num2[i+2];
			num_2=num_2*10+getnum(temp);
		}	
		int res=num_1+num_2;
		temp="";
		while(res>0)
		{
			temp=getcode(res%10)+temp;
			res/=10;
		}
		cout<<a<<temp<<"\n";
		
	}	
}
