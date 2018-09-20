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
//cout<<m;

int f=k,l=n;

while(f!=0)
{ 
	for(int i=0;i<=m+1;i++)
	{ int flag=0; 
	
for(int j=0;j<l;j++)
{
	if(a[j]==i)
	{
	flag=1;

	break; }
}
if(flag==0)
{ cout<<i;
	a[l+1]=i;
	l++;

}		

}
f--;
}

for(int i=0;i<l;i++)
{
	cout<<a[i];
}


int c=0;
m=*max_element(a.begin(),a.end());
sort(a.begin(),a.end());
for(int i=0;i<=m+1;i++)
	{ int flag=0;
		for(int j=0;j<n+k;j++)
		{
		if(a[j]==i)
{
		flag=1;	
		break;
}
		}
		if(flag==0)
		{
		c=i;
		break;		
}
	}
	 
//	cout<<c<<endl;
}



return 0;
}
