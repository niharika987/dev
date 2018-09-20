#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{    string s;
    int a1,a2;
    cin>>s>>a1>>a2;
    sort(s.begin()+a1,s.begin()+a2+1,greater<int>());
    // 2 arg is exclusive
    cout<<s<<endl;
}
    return 0;
    
}
