#include<iostream>
using namespace std;
 
int main()
{   int n,a,b,c[10],i,x,y,s;
    cin>>n;
    while(n--)
    { i=0;
      s=0;
      cin>>a>>b;
      while(1)
      { 
        x = a%10;
        y = b%10;
        c[i++] = (x+y)%10;
        a /= 10;
        b /= 10;
        if(a==0 && b==0)
          break;
      }
      for(int j=i-1;j>=0;j--)
        s = s*10 + c[j];
      cout<<s<<endl;
      
    }
} 
