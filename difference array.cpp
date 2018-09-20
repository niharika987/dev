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
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];
    int count=0,x=0;
    
    for(int i=0;i<n;i++)
    {
    if(i==0)
    x=a[i]-0;
    else
    x=a[i]-a[i-1];
    
    if(b[i]<=x)
    count++;
    } cout<<count<<endl;
    }
    return 0;
    }
