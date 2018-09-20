#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ int x;
cin>>x;
int sum=0;
int a=x;
//cout<<a;

while(a!=0)
{ int b;
b=a%10;
//cout<<b;
a=a/10;
//cout<<a;


sum=sum+b;

}
cout<<sum<<endl;

}
return 0;

}
