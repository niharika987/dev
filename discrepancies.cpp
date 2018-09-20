#include<iostream>
using namespace std;
int main()
{
	int d[1000000]={0};
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	int a[n1],b[n2],c[n3];
	for(int i=0;i<n1;i++)
	{
	cin>>a[i];
	d[a[i]]++;
	}
	for(int i=0;i<n2;i++)
	{
	cin>>b[i];
	d[b[i]]++;
	}
	for(int i=0;i<n3;i++)
	{
	cin>>c[i];
	d[c[i]]++;
	}
	
	

	int count=0;
for(int i=0;i<1000000;i++)
{
	if(d[i]>=2)
count++;
}

cout<<count<<"\n";

for(int i=0;i<1000000;i++)
{
	if(d[i]>=2)
cout<<i<<"\n";
}	
	
	
	return 0;
}
