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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		reverse(a,a+n);
	int i=0,l=0,b=0;
//	cout<<l<<b;
	while(i<n)
	{
		if(i==n-1)
		break;
		if(a[i]==a[i+1])
		{
	if(l==0)
	{
		l=a[i];
i=i+2;
}else if(b==0)
	{ 
		b=a[i];
break;
}
		 }
else{
	i++;
}		
	}
	if(l!=0 && b!=0)
	cout<<l*b<<endl;
	else
	cout<<"-1"<<endl;
	
	
	}
	return 0;
}
