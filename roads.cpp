#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> g(n+1);
   for(int i=1;i<n;i++)
   {
      cin>>g[i];
   }
   
   int q;
   while(q--)
   { int d,count=0;
       char c;
       cin>>c;
       if(c=='Q')
       {
           cin>>d;
           for(int i=d;i<n;i++)
           {
               if(g[d]==g[d+1])
               count++;}
               for(int i=d;i>0;i--)
               {
           if(g[d]==g[d-1])
           count++;
                 }
       
           cout<<count<<endl;
       }
       
       else{
           for(int i=0;i<n;i++)
           {
               if(g[i]==1)
               g[i]=0;
               else
               g[i]=1;
           }
       }
     
   }
   
    return 0;
}

