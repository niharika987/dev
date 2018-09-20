#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[6]={1,2,5,10,50,100};
int t;
cin>>t;
while(t--)
{ int count=0;
int n;
cin>>n;
int i=5;

while(n>0 && i>=0)
{
if(n>=a[i])
{n=n-a[i];
count++;

}else
{i--;
}
}
cout<<count<<endl;

}
return 0;
}
