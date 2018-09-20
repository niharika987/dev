#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],b[n];

	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	b[i]=a[i];
}

sort(b,b+n);
int s=0,e=0;
for(int i=0;i<n;i++)
{
	if(b[i]!=a[i])
	{
	s=i;
	break;}
}
for(int i=n-1;i>=0;i--)
{
	if(b[i]!=a[i])
	{
	e=i;
	break;}
}

if(s>=e)
{
cout<<"yes"<<endl<<"1"<<" "<<"1";
return 0; }
int flag=0;
int front=s,end=e;
do{ front++;
	if(a[front-1]<a[front])
	{
	flag=1;
	break;}
}while(front!=end);

if(flag==1)
cout<<"no"<<endl;
else
cout<<"yes"<<endl<<s+1<<" "<<e+1;	


	return 0;
}
