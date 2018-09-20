#include<bits/stdc++.h>
using namespace std;
long long int d, x, y;
long long int modularExponentiation(long long int x,long long int n,long long int M)
{
  long long int result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=(result * x)%M;
        x=(x*x)%M;
        n=n/2;
    }
    return result;
}
void extendedEuclid(long long int A,long long int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
     long long  int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

long long int modInverse(long long int A,long long int M)
{
    extendedEuclid(A,M);
    return (x%M+M)%M;    //x may be negative
}

int main()
{
   long long int a,b,c,d1;
    cin>>a>>b>>c>>d1;
    a=modularExponentiation(a,b,d1);
    c=modInverse(c,d1);
    cout<<((a%d1)*(c%d1))%d1;
    return 0;
}
