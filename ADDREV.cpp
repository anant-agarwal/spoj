#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	long resum[num];
	int i=0;	
	for(i=0;i<num;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		long reva=0,revb=0;
		while(a!=0)
		{
			reva=reva*10+a%10;
			a=a/10;
		}
		while(b!=0)
		{
			revb=revb*10+b%10;
			b=b/10;
		}
		long sum=reva+revb;
		long revsum=0;
		while(sum!=0)
		{
			revsum=revsum*10+sum%10;
			sum=sum/10;
		}
		resum[i]=revsum;
	}
	for(i=0;i<num;i++)
	printf("%ld\n",resum[i]);	
	return 0;
}
