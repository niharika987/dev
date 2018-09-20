#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,t1,t2,k;
cin>>n>>t1>>t2>>k;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
int g=t1*k;
int h=0;
for(int i=0;i<k;i++)
{
h=h+(t2*a[i]);
}
//cout<<g<<h<<endl;
if(g<h)
cout<<"Gagan"<<endl;
else if(h<g)
cout<<"Himanshu"<<endl;
else 
cout<<"Impossible"<<endl;
}
return 0;
}
