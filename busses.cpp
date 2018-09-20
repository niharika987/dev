#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int w,v;
	cin>>w>>v;
	int q;
	cin>>q;
	
	while(q--)
	{
		int i, pi,ti,ui;
		cin>>pi>>ti>>ui;
	for( i=0;i<n;i++)
	{
		if(pi==a[i])
		break;
		else if(pi>a[i])
		break;
		
	}
	double s,s12,s1=0;
	s=100/v;
	
	s1=(100-pi)/double(ui);
	if((pi-a[i])<(a[i+1]-pi))
	{
	s12=(i*w)+(a[i]/v)+(100-a[i])/v;
	}
	else{
		i=i+1;
		s12=(i*w)+(a[i]/v)+(100-a[i])/v;
	}
	s1=s1+ti;
	if(s12<s1)
printf("%.9f\n",s12);
	else
	printf("%.9f\n",s1);
}
	return 0;
}
