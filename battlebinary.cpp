#include<bits/stdc++.h>
using namespace std;
int binary(int low,int high,int key,int a[])
{
    while(low<=high)
    { int mid=(low+high)/2;
        if(key<a[mid]){
        
        high=mid-1; }
        else if(key>a[mid])
        { 
        low=mid+1;
        }else
        {
        return mid; }
    } return -1;
}
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
    { int sum1=0;
        int m;
        cin>>m;
        if(m>a[t-1])
       { cout<<t<<" "<<sum<<endl; }
       else if(m<a[0])
       {
       	cout<<"0"<<" "<<"0"<<endl;
       }
        else
        {
       int y= binary(0,t-1,m,a);
       if(y!=-1)
       {
       
        for(int i=0;i<=y;i++)
        {
        sum1=sum1+a[i];
    }
         cout<<y+1<<" "<<sum1<<endl;   
            
   }
        }
        
        }
    
    
    
    
    return 0;
    
}
