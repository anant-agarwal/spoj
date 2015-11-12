#include<iostream>
#include<vector>
using namespace std;
vector<int>box;
int p[2000][2000]={0};
int trt(int d,int s,int e)
{
	if (e==s)
	return d*box[e];

	if(p[s][e]!=0)
	return p[s][e];

	int q=d*box[s]+trt(d+1,s+1,e);
	int t=d*box[e]+trt(d+1,s,e-1);
	//cout<<"trt("<<d<<","<<s<<","<<e<<") :: "<<q<<" "<<t<<"\n";
	p[s][e]=max(q,t);	
	return p[s][e];
}
int main()
{
	int d=1;
//	vector<int>box;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		box.push_back(x);
		//cout<<box[i]<<"\n";
	}
	cout<<trt(1,0,n-1);
}

