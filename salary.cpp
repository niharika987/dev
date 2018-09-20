#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
while(n--)
{
int s;
cin>>s;
if(s<1500)
{
float h=0.1*s;
float d=0.9*s;
float x=d+s+h;
cout<<x<<endl;
}
else{
float h=500;
float d=0.98*s;
float x=d+s+h;
cout<<x<<endl;
}
}
return 0;
}
