#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int x;
cin>>x;
int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1;
cin>>x2>>y2;
cin>>x3>>y3;
float d1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
float d2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
float d3=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
if(d1<=x && d2<=x || d2<=x && d3<=x || d3<=x && d1<=x)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;


}
return 0;
}
