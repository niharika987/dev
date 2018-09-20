#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n,q;
   cin>>n>>q;
   //int x=(2*n)+1;
   int a[100003];
  for(int i=1;i<=2*n;i++)
  {
      cin>>a[i];
  }
  while(q--)
  { int c,p,v1,v2,i,j;
      cin>>c;
      if(c==0)
      { 
          cin>>p>>v1>>v2;
      int h=2*p;
      a[h-1]=v1;
      a[h]=v2;
      //cout<<a[h]<<a[h-1];
      }
      else{
          cin>>i>>j>>v1>>v2;
         int k=(2*i)-1;
         int sum=0;
        // cout<<2*j<<" ";
         while(k!=2*j+1)
         { //cout<<a[k];
		 int a1=abs(v1-a[k]);
         int b=abs(v2-a[k+1]);
         //cout<<a1<<b;
           int g=max(a1,b);
           //cout<<g;
		    sum=sum+g;
             k=k+2;
         }
         cout<<sum<<endl;
      }
  }
    return 0;
}

