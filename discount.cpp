#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int q,p;
cin>>q>>p;
float r=q*p;
if(q>1000)
{
float d=(10*r)/100;
r=r-d;
printf("%6lf\n",r);
}
else
{
printf("%6lf\n",r);
}

}
return 0;
}
