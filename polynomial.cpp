#include <iostream>
using namespace std;

int main()
{ long long n;
cin>>n;
long long a[n+1];
long long m=0;
for(int i=0;i<n+1;i++)
{cin>>a[i];
if(a[i]==0)
{m++;

 }   
} if(m==n+1)
{cout<<"0 0";
}
else if(a[0]<0 & m==n)
cout<<"-1 -1";
else if(a[0]>0 & m==n)
cout<<"1 1";
else
{ 
if(a[n]==0)
{ while(a[n]==0)
{
n--; }
 }   if((n)%2==0)
    {
        if(a[n]<0)
        cout<<"-1 -1";
        else
        cout<<"1 1";
    }
else
{
   if(a[n]<0)
        cout<<"-1 1";
        else
        cout<<"1 -1";
 }}   return 0;
}

