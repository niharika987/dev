#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
   sort(a,a+n);
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
