#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    { int max=0,c=0;
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        max=max+a[i];
        
        if(max>m)
        break;
    c++;    
    }
    cout<<c;
    }
    return 0;
}

