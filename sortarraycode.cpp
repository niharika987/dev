#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int m1=*min_element(a,a+n);

	int c=0,s=0,e=0,b[n];
	for(int i=0;i<n;i++)
	{
	b[i]=m1+i;
		if(b[i]!=a[i])
		{
		c++;	
if(c==1)
s=i+1;
if(c==2)
e=i+1;
}
}

if(c>2)
cout<<"no";
else if(c>0 && c<=2)
cout<<"yes"<<endl<<s<<" "<<e;
else if(c==0)
cout<<"yes"<<endl<<"1"<<" "<<"1";

	return 0;
}
