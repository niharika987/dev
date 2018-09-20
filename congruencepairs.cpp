#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=1;i<n+1;i++)
    a[i]=i%k;
    
   sort(a+1,a+n+1);
    int count=0;
   long long res=0;
   
    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && a[j] == a[i]) j++;
        res += (long long)(j - i) * (j - i - 1) / 2;
        i = j;
    }
    cout<<res;
    return 0;
	}
