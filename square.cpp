#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int q;
    cin>>q;
    while(q--)
    {
        int m,x,sum=0;
        cin>>m;
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i];
      if(sum>=m)
      {x=i;
            break;
       } }
       if(sum<m)
       cout<<"-1"<<endl;
       else
       cout<<x+1<<endl;
    }
    return 0;
}
