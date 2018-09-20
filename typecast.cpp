#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
if((a-b)%10!=0)
cout<<(a-b)-1;
else
{
int c=a-b;
string s;
int x=c/10;
x++;
s=s+(char)x+48;
while(c!=0)
{
	int y=c/10;
	s=s+(char)y+48;
	c=c/10;
}
cout<<s;



}
return 0;
}
