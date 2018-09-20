#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,k;
cin>>n>>k;
vector<int> a(n+k);
for(int i=0;i<n;i++)
{
cin>>a[i];
}

int m=*max_element(a.begin(),a.end());

int f=k,l=n;
	for(int i=0;i<=m+k;i++)
	{ if(f==0)
      break; 
int flag=0; 
	
for(int j=0;j<l;j++)
{
	if(a[j]==i)
	{
	flag=1;
	break; }

}

if(flag==0)	
{ 
a[l]=i;
l=l+1;
f--;
}

}


m=*max_element(a.begin(),a.end());
for(int i=0;i<=m+1;i++)
{
int flag=0; 
	
for(int j=0;j<l;j++)
{
	if(a[j]==i)
	{
	flag=1;
	break; }

}
if(flag==0)
{
cout<<i<<endl;
break;	
}
}

}

return 0;
}
