#include<iostream>
using namespace std;
int sort(int a[],int len);
int main()
{
	int a,d;
	int arr_a[11];
	int arr_b[11];
	while(1)
	{
		cin>>a>>d;
		if(a==0 && d==0)
		break;
		for(int i=0;i<a;i++)
		cin>>arr_a[i];
		for(int j=0;j<d;j++)
		cin>>arr_b[j];
		sort(arr_a,a);
		sort(arr_b,d);
		if(arr_a[0]<arr_b[1])
		cout<<"Y\n";
		else
		cout<<"N\n";

	}
}
int sort(int a[],int len)
{
	for(int i=1;i<len;i++)
	{
		for(int j=0;j<len-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];	
				a[j+1]=temp;	
			}
		}
	}
}
