#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	sort(a+1,a+n);
	int count=1;
	int i=0;
		int j=i+1;
	while(i<n)
	{ 
	
		if(i==n-1)
		break;
		if(k==0)
		break;
	if(abs(a[i]-a[j])<=k)
{
	k=k-abs(a[i]-a[j]);
	count++;
	i++;
	j=i+1;

}
	else
{ j++;
	continue;
}

	}
	
	cout<<count<<endl;
	
	
	return 0;
}
