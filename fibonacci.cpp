#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
int c5=0,c0=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
if(a[i]==5)
c5++;
else
c0++;
}
int x=c5*5;
string s;
if(c0==0)
{
cout<<"-1";
return 0 ;
}
if(x==0)
{cout<<"0";
return 0 ;
	
}
else if(x%9==0)
{ //cout<<x<<"yo";

	for(int i=0;i<c5;i++)
	s=s+"5";
	for(int i=0;i<c0;i++)
	s=s+"0";
}
else
{

while(c5--)
{
x=c5*5;
if(c5==0)
break;
if(x%9==0)
{ 
	for(int i=0;i<c5;i++)
	s=s+"5";
	for(int i=0;i<c0;i++)
	s=s+"0";
break;
}

}
}

if(s.empty() && c0!=0)
	cout<<"0";

else if(s.empty() && c0==0)
cout<<"-1";
	else
	cout<<s;
	return 0;
}
