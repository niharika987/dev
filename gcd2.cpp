#include<bits/stdc++.h>
using namespace std;
int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    { int n,k;
    cin>>n>>k;
int b[n];
for(int i=0;i<n;i++)
cin>>b[i];
int x=b[0];
for(int i=0;i<n;i++)
x=gcd(x,b[i]);
cout<<x<<endl;
cout<< x%k;

} 
return 0;

}


