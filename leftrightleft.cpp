 #include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
	
	int n1,r;
	cin>>n1>>r;
	int a[n1];
	for(int i=0;i<n1;i++)
	cin>>a[i];
	int flag=0, max=0,min=0;
	if(r<a[0])
	{
		
	max=a[0];
	min=0;
}
else if(r>a[0])
{
	min=a[0];
	max=10000000;
}
	
int i=1;
while(i<n1)
{
if(i==n1-1)
break;
	
if(r<=max && r>=min)
{
if(a[i+1]<=max)
{
max=a[i+1];
flag=0;
i++;
}
else{
	
	flag=1;
break;
}
}

	else if(r>max)
	{ 
	max=a[i-1];
	min=a[i];
	
	}
	
	}
	if(flag==1)
	cout<<"NO"<<endl;
	else if(flag==0)
	cout<<"YES"<<endl;
		
	}
		return 0;
}
