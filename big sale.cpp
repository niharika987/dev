#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		double sum=0;
		int sp[n],q[n],d[n];
		for(int i=0;i<n;i++)
		{
		cin>>sp[i]>>q[i]>>d[i];	
			double p3=double(d[i])/100;
		double p1=(p3*sp[i])+sp[i];
		//cout<<p1<<endl;
	
	//	cout<<p3;
		p3=1-p3;
	//	cout<<p3;
		double p2=p1*p3;
	//	cout<<p2<<endl;
		double r=sp[i]-p2;
	//	cout<<r<<endl;
		double r1=r*q[i];
	//	cout<<r1<<endl;
		sum=sum+r1;
		}	
	printf("%.7f",sum);
	cout<<"\n";
		}
	return 0;
}
