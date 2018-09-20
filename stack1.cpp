#include <iostream>
using namespace std;
long long top=-1;
long long stack[200007];
int main()
{long long a,count=0;
   long long n;
   cin>>n;
   while(n--)
   { 
       cin>>a;
      
       if(top==-1 && a!=0)
       {stack[++top]=a;
       } 
       else if (stack[top]==-a)
       { 
           stack[top--];
         count=count+2;
          
       }
       else if(a!=0)
       {
           stack[++top]=a;
       }
      
        } cout<<count;
    return 0;
}
