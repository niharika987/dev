#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ long x,sum=0;;
cin>>x;
int a[x][x];

for(int i=0;i<x;i++)
{  long max=1;
for(int j=0;j<=i;j++)
{ 
cin>>a[i][j];
if(max<a[i][j])
max=a[i][j];

} if(max>1)
 sum=sum+max;

}
cout<<sum<<endl;
}
return 0;
}

