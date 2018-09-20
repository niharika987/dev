#include<iostream>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{
int length,ans=0;
cin>>length;
while(length>2)
{
ans=ans+(length-2)/2;
length=length-2;

} cout<<ans<<endl;
}
return 0;
}
