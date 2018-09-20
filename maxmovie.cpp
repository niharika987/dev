#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int a[n],b[n],c[n];
for(int i=0;i<n;i++)
cin>>a[i];
for(int i=0;i<n;i++)
{cin>>b[i];
c[i]=a[i]*b[i];
}

int count=0;

int m=*max_element(c,c+n);
//cout<<m;
int j=0;
for(int i=0;i<n;i++)
{
	if(c[i]==m)
	{ j=i;
	count++;
}

}

if(count==1)
{
cout<<j+1<<endl;
continue;
}

else if(count>1)
{ int k=0,count1=0;
	int m1=*max_element(b,b+n);
	for(int i=0;i<n;i++)
{
	if(b[i]==m1)
	{ k=i;
	count1++;
}
}
if(count1==1)
{
cout<<k+1<<endl;
continue; }
else if(count1>1)
{
for(int i=0;i<n;i++)
{
	if(b[i]==m1)
	{
	k=i;
	break; }
}	
cout<<k+1<<endl;
continue;
}	

}

}
return 0;
}
