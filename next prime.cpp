#include <bits/stdc++.h>
using namespace std;
 
void primes(int n,int m)
{
    bool pr[51];
    memset(pr, true, sizeof(pr));
 
    for (int p=2; p*p<=51; p++)
    {
         if (pr[p] == true)
        {
            for (int i=p*2; i<=51; i += p)
                pr[i] = false;
        }
    }
  //( p==n)
         //{
		  int i=1;
         while(pr[n+i]!=1)
         {
         	i++;
         }
        // cout<<n+i;
         if((n+i)==m)
         cout<<"YES"<<"\n";
         else
         cout<<"NO"<<"\n";
         	
         //}
         
     //}
}
 
int main()
{ int n,m;
cin>>n>>m;
   primes(n,m);
    return 0;
}
