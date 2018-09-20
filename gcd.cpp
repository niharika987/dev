#include<bits/stdc++.h>
using namespace std;
int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
// Driven code
int findlcm(int arr[], int n)
{
    // Initialize result
    int ans = arr[0];
 
    // ans contains LCM of arr[0],..arr[i]
    // after i'th iteration,
    for (int i=1; i<n; i++)
        ans = ( ((arr[i]*ans)) /
                (gcd(arr[i], ans)) );
 
    return ans;
}
int main()
{
    int a,flag=1;
cin>>a;
int b[a];
for(int i=0;i<a;i++)
cin>>b[i];
int x=b[0];
for(int i=0;i<a;i++)
x=gcd(x,b[i]);
cout<<x;
int y=findlcm(b, a);
cout<<y;
return 0;
}


