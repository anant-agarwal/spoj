#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int date[1001][3];
	long cons[1001];
	while(n!=0)
	{
		int count=0;
		int total=0;
		for(int i=0;i<n;i++)
		{
			cin>>date[i][0]>>date[i][1]>>date[i][2]>>cons[i];
		}
		for(int i=0;i<n-1;i++)
		{
			if((date[i+1][0]-date[i][0]==1) && (date[i][1]==date[i+1][1]) && (date[i+1][2]==date[i][2]))
			{
				count++;
				total+=cons[i+1]-cons[i];
			}
			else
			if( (date[i+1][1]-date[i][1]==1) && date[i+1][0]==1 && (date[i+1][2]==date[i][2]))
			{
				int m=date[i][1];
				if( ((m==1 || m==3 || m==5 || m==7 || m==8 || m==10)&& date[i][0]==31) || ((m==4 ||m==6 || m==9 || m==11)&& date[i][0]==30) )
				{
					count++;
					total+=cons[i+1]-cons[i];
				}
				else
				if(m==2 && ((date[i][2]%4==0 && date[i][2]%100!=0) || date[i][2]%400==0) && date[i][0]==29)
				{
					count++;
					total+=cons[i+1]-cons[i];
				}
				else
				if(m==2 && !((date[i][2]%4==0 && date[i][2]%100!=0) || date[i][2]%400==0) && date[i][0]==28)
				{
					count++;
					total+=cons[i+1]-cons[i];
				}
			}
			else
			if((date[i+1][2]-date[i][2]==1) && date[i+1][0]==1 && date[i+1][1]==1 &&  date[i][0]==31 && date[i][1]==12)
			{
					count++;
					total+=cons[i+1]-cons[i];
			}
		}
		cout<<count<<" "<<total<<"\n";
		cin>>n;
	}
}
