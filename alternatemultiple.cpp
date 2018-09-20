#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
long long a,b,n;
cin>>a>>b>>n;
int flag=0;
while(n--)
{ if(flag==0)
	{
	a=a*2;
	flag=1;
}
else{
b=b*2;
flag=0;	
}

}
cout<<max(a,b)/min(a,b)<<endl;
}

return 0;
}
