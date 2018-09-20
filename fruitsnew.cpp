#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
int a,m,k;
cin>>a>>m>>k;
int x=abs(a-m);

if(x<=k)
{

cout<<"0"<<endl;
}else
{

cout<<abs(k-x)<<endl;

}
}
return 0;
}
