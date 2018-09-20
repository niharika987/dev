#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,m,k;
cin>>n>>m>>k;
vector<int> a(m),b(k);
for(int i=0;i<m;i++)
cin>>a[i];
for(int i=0;i<k;i++)
cin>>b[i];
int count=0,count1=0;
for(int i=1;i<=n;i++)
{ 
vector<int>::iterator it,ts;
it=find(a.begin(),a.end(),i);
ts=find(b.begin(),b.end(),i);
if(it==a.end() && ts==b.end())
count1++;
else if(it!=a.end() && ts!=b.end())
count++;

}
cout<<count<<" "<<count1<<endl;
}
return 0;
}
