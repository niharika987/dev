#include<bits/stdc++.h>
 
using namespace std;
 
const long long maxx = 1e10+23;
int main()
{
    long long int t,n,q,a,x,p;
    cin>>t;
    while(t--)
    {
        p=maxx;
        cin>>n>>q;
    
        while(n--)
        {
             cin>>a;
             if(a>(maxx/p))
               p = maxx;
             else
               p*=a;
        }
        cout<<"yo"<<p<<"nbcvmm";
        
        while(q--)
        {
           cin>>x;
           cout<<x/p<<'\n';
        }
     }
}  
