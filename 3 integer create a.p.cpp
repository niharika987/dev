#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,c;
		cin>>a>>b>>c;
		long int d1=c-b;
		long int d2=b-a;
if(d1==d2)
{
	cout<<"0"<<"\n";
	continue;
}
		if(abs(d1)==abs(d2) )
		{
		cout<<abs(d1)<<"\n";
		continue;}
		else{
		
	long int dav=(d1+d2)/2;
	
		 long int x1=c-dav;

		long int x12=b-x1;

	if(b>0)
	{
		if(x12<0)
		b=b+abs(x12);
		else
		b=b-x12;
		
	}
	else{
		if(x12>0)
		b=b+x12;
		else
		b=b-x12;
	}
		//cout<<b

		long int x2=b-dav;

		long int x22=abs(a-x2);
	
		cout<<abs(abs(x12)+x22)<<"\n";
}
	}
	return 0;
}
