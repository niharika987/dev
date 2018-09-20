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
        int res=1;
      long long sum=0;
        while(n%2==0)
        n=n/2;
        
        for(int i=3;i<=sqrt(n);i++)
        {
            int crt=1,cs=1;
            while(n%i==0)
            {
                n=n/i;
                crt=crt*i;
                cs=cs+crt;
            }
           res=res*cs; 
        }
        
        if(res>=2)
        {
            res=res*(1+n);
        }
        
        cout<<res<<endl;
    }
    return 0;
}
