#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main()
{
	char a[1001];
	while(1)
	{
		int flag=0;
		gets(a);
		//cout<<a;	
		int len=strlen(a);
		if(len==1 && a[0]=='*')
		break;
		int j;
		for(j=0;j<len &&a[j]==' ';)
		{
			j++;
		}
		//cout<<j;
		char ch=tolower(a[j]);
		//cout<<ch;
		for(int i=0;i<len;i++)
		{
			if(a[i]==' ' && i+1!=len && tolower(a[i+1])!=ch)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		cout<<"Y\n";
		else
		cout<<"N\n";
	}
}
