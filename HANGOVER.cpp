#include<iostream>
using namespace std;
int main()
{
	float c;
	while(1)
	{
		cin>>c;
		//cout<<c;
		if(c==0.00)
		break;
		double sum=0;
		double i;
		for(i=1;sum<c;i++)
		{
			sum+=1/(i+1);
			//cout<<sum<<"\n";
		}
		cout<<i-1<<" card(s)\n";	
	}
}
