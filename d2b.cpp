 
#include <iostream>
using namespace std;
 
void dtb(int n)
{
     int bn[1000];
 
    int i = 0;
    while (n > 0) {
 
         bn[i] = n % 2;
        n = n / 2;
        i++;
    }
    cout<<i;
 int c0=0,c1=0;
      for (int j = i - 1; j >= 0; j--)
     {
     	if(bn[i]==0)
     	c0++;
     	else
     	c1++;
     }
     if(c1>c0)
     cout<<"1";
     else
     cout<<"0";
}

int main()
{
   int n;
   cin>>n;
    dtb(n);
    return 0;
}
