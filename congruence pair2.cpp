#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    int z=n/k;
    int m=n%k;
    int r=((z*(z-1))/2)+(m*(z*(z+1))/2);
    cout<<r;
    return 0;
	}
