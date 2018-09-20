
#include <bits/stdc++.h>
using namespace std;
 
int calc(int n)
{
    
    int res = 1;
 
    
    while (n % 2 == 0)
        n = n / 2;
 
    for (int i = 3; i <= sqrt(n); i++) 
    {
 
       
        int  cs = 1;
        int crt = 1;
        while (n % i == 0) {
          
 
            n = n / i;
 
            crt *= i;
            cs += crt;
        }
 
        res *= cs;
    }
 
    
    if (n >= 2)
        res *= (1 + n);
 
    return res;
}
 
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
 int n;
 cin>>n;  
    cout << calc(n);
}
    return 0;
}
