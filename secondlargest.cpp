#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
vector<int> a(3);
for(int i=0;i<3;i++)
cin>>a[i];
int b=*max_element(a.begin(),a.end());
for(int i=0;i<3;i++)
{
if(b==a[i])
a[i]=0;
}
int c=*max_element(a.begin(),a.end());
cout<<c<<endl;

}

return 0;
}
