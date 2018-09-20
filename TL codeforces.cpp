#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<m;i++)
	cin>>b[i];
	sort(b,b+m);
	sort(a,a+n);
	int min=*min_element(a,a+n);
	int v=min*2;
	int max=*max_element(a,a+n);
	if(v<max)
{
	v=max;
//v=v*2;
}	int min1=*min_element(b,b+m);
	if(v<min1)
	cout<<v<<endl;
	else
	cout<<"-1";
	return 0;
}
