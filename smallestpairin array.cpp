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
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int x=1000000000;
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{ 
int s=a[i]+a[j];
if(s<x)
x=s;

}
} cout<<x<<endl;
}
return 0;
} 
