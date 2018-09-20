#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int> a(n+1);
int b[100005]={0};
for(int i=1;i<=n;i++)
{
cin>>a[i];
b[a[i]]++;
}
int x=*max_element(a.begin(),a.end());
int i;
for( i=1;i<=x;i++)
{
if(b[i]%2!=0)
break;
}
cout<<i<<endl;
}
return 0;
}
