#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[t],sum=0;
    for(int i=0;i<t;i++)
    {cin>>a[i];
sum=sum+a[i];
    }
    
    sort(a,a+t);
    int q;
    cin>>q;
    while(q--)
    { int sum1=0,count=0;
        int m;
        cin>>m;
        if(m>a[t-1])
       { cout<<t<<" "<<sum<<endl; }
       
        else
        {
      for(int i=0;i<t;i++)
      {
      	if(a[i]<=m)
      	{
      	count++;
      	sum1=sum1+a[i]; }
      	if(a[i]>m)
      	break;
      } cout<<count<<" "<<sum1<<endl;
        }
        
        }
    
    
    
    
    return 0;
    
}
