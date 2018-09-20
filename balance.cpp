#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ long n,p;
int hard=0,ck=0;
cin>>n>>p;
int p1[n];
for(int i=0;i<n;i++)
{
cin>>p1[i];
if(p1[i]>=p/2)
ck++;
else if(p1[i]<=p/10)
hard++;
}
if(ck==1 && hard==2)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;

}
return 0;
}
