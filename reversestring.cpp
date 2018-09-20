#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
    {string s,s1;
    cin>>s;
    s1=s;
    reverse(s.begin(),s.end());
    if(s1==s)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
 
    }
}
