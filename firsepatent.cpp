#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ 
//cout<<"hdsfk"<<endl;
	int n,m,x,k;
	cin>>n>>m>>x>>k;
	char a[k];
	int e=0,o=0;
	for(int i=0;i<k;i++)
	{		cin>>a[i];
	if(a[i]=='E')
	e++;
	else
	o++;
	}
	

if(k<n)
{
cout<<"no"<<endl;

}
else if(x==0)
{

cout<<"no"<<endl;
}

else
{
int e1=m/2;
int o1=m-e1;
	
float r1=e/x;
float  r2=o/x;
int r3=ceil(r1);
int r4=ceil(r2);


if(e1==0)
{
	if(r4<=o1)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
}
else if(o1==0)
{
	if(r3<=e1)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
}
else if( r3>e1 || r4>o1 )
{

cout<<"no"<<endl;
}
else
cout<<"yes"<<endl;


}

}
	return 0;
	
}
