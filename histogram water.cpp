#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int a[12]={0,1,0,2,1,0,1,3,2,1,2,1};
	int max=0;
	int sum=0;
	int mgr[12];
	int mgl[12];
	mgr[11]=-1;
	mgl[0]=-1;
	for(int j=0;j<12;j++)
	{
	
	for(int i=j;i>=0;i--)
	{
		if(a[i]>max)
		max=a[i];
	}
	mgl[j]=max;
	int max1=0;
	for(int i=j;i<12;i++)
	{
		if(a[i]>max1)
		max1=a[i];
	}
	mgr[j]=max1;
	
	int res=min(mgr[j],mgl[j])-a[j];
cout<<res<<endl;
	//cout<<a[j]<<endl;
	
sum=sum+res;

}
cout<<"sum"<<sum;
	return 0;
}
