#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ 
	int n,m,x,k;
	cin>>n>>m>>x>>k;
	char a[k];
	int e=0,o=0;
	for(int i=0;i<k;i++)
	{
		cin>>a[i];
	if(a[i]=='E')
	e++;
	else
	o++;
	}
	
if(k<n)
{
cout<<"no"<<endl;

}

else
{
int e1=m/2;
int o1=m-e1;
	
long long r1=x*e1;
long long r2=x*o1;
if(e<=r1 && o<=r2)
{
	if((r1+r2)>=n)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
}
else
{

cout<<"no"<<endl;
}

}


}
	return 0;
	
}
