#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int y;
cin>>y;
int x=y;
int y1=y%10;
y=y/10;
int y2=y%10;
y2=y2*10+y1;

y=y/10;

int s=1+y2+(y2/4);

if(y==20)
s=s+6;
else if(y==21)
s=s+4;
else if(y==22)
s=s+2;
else if(y==23)
s=s+0;
else if(y==24)
s=s+6;
else if(y==25)
s=s+4;


s=s%7;

if((x%400)==0||((x%100)!=0 && (x%4)==0))
{
s=s-1;
if(s==0)
s=6;
}


if(s==0)
cout<<"sunday"<<endl;
else if(s==1)
cout<<"monday"<<endl;
else if(s==2)
cout<<"tuesday"<<endl;
else if(s==3)
cout<<"wednesday"<<endl;
else if(s==4)
cout<<"thursday"<<endl;
else if(s==5)
cout<<"friday"<<endl;
else if(s==6)
cout<<"saturday"<<endl;
}
return 0;
}
