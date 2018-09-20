#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	cout<<n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int m1=*min_element(a,a+n);
	cout<<m1;
	int c=0,s=0,e=0,b[n];
	for(int i=0;i<n;i++)
	{
	b[i]=m1+i;
		if(b[i]!=a[i])
		{
		c++;	
if(c==1)
s=a[i];
if(c==2)
e=a[i];
}
}

if(c>2)
cout<<"No";
else if(c>0 && c<=2)
cout<<"Yes"<<endl<<s<<" "<<e;
else if(c==0)
cout<<"YES"<<endl<<a[0]<<" "<<a[0];

	return 0;
}
