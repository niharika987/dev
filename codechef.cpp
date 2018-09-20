#include<iostream>
using namespace std;
int main()
{
int t,n;
 
cin>>t;
while(t--)
{ int r=0;
int suffix,prefix;
cin>>n;
int min=0,index=0;
int a[n],b[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
{
for(int j=0;j<i;j++)
prefix=prefix+a[j];
for(int k=n-1;k>n-(n-i-1);k--)
suffix=suffix+a[k];
 
b[i]=suffix+prefix;
}min=b[0];
for(int i=0;i<n;i++)
{ if(min>b[i])
{
min=b[i];
index=i;
}
 
}
cout<<index;
}
 
} 
