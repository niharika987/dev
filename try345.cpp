#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ int fact=1;
int x;
cin>>x;
if(x==0)
{cout<<"1"<<endl;
continue; }

while(x!=1)
{
fact=fact*x;
x=x-1;
} cout<<fact<<endl;

}
return 0;
}
