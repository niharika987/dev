#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[2049+3];
int i=0;
while(i<12)
{
int b=pow(2,i);
a[b]=1;
i++;
}
int t;
cin>>t;
while(t--)
{ int c=0;
int x;
cin>>x;

while(x>=1)
{

if((x&&!(x&(x-1)))==1)
{
if(x<=2048)
{ c++;

break; }
else{
x=x-2048;
c++;
}

}
else{
int i=x;
 while(x>=1)
{
if(i>x)
	i--; 
	if(a[i]==1)
	{	

	x=x-i;

	c++;
}
	else{ 
		i--; 
	}
} 	 
}
}
cout<<c<<endl;

}
return 0;
}
