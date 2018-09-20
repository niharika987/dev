#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
cin>>t;
while(t--)
{ int n,count=0;
int p;
cin>>p;
	for(int i=11;i>=0;i--)
	{
		n=pow(2,i);
		while(n<=p)
		{
			count++;
			p=p-n;
		}
	}
	cout<<count<<endl;
	
}
return 0;
}
