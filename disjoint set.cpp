#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=1;j<=t;j++)
    { int a1[100000];
    int n,a,b,c1=0,c2=0;
    cin>>n;
    memset(a1,-1,100000);
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
       if(a1[a]==-1 && a1[b]==-1)
       {
       a1[a]=0;
       a1[b]=1;}
       else if(a1[a]==0)
       {
       	a1[b]=1;
       }
       else if(a1[b]==0)
       {
       	a1[a]=1;
       }
       else if(a1[a]==1)
       {
       	a1[b]=0;
       }
       else if(a1[b]==1)
       {
       	a1[a]=0;
       }
       
            
    }
   
    for(int i=0;i<10;i++)
    {
        if(a1[i]==1)
        c1++;
        if(a1[i]==0)
        c2++;
       
    }
   
    cout<<"case : "<<j<<" "<<max(c1,c2)<<endl;
    }
    return 0;
}
