#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	string s;
	cin>>s;
int x=ex-sx;
int y=ey-sy;
if(sx==ex && sy==ey)
 {
 cout<<"0";
return 0;}

int flag=0,flag1=0;
int ix=0,ie=0;
if(x<0)
{ int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='W')
		count++;
		if(count==abs(x))
		{
		flag=1;
		ix=i+1;
		break;
		}
	}
	
}
else if(x==0)
{
	flag=1;
}
else  {
int count=0;
	for(int i=0;i<s.length();i++)
	{ 
		if(s[i]=='E')
		count++;
		if(count==abs(x))
	{
		flag=1;	
ix=i+1;
break;
}
	}

}	



if(y<0)
{ int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='S')
		count++;
		if(count==abs(y))
	{
	flag1=1;
ie=i+1;	
break;
}
	}
	
}

else if(y==0)
{
	flag1=1;
}
else  {
int count=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='N')
		count++;
		if(count==abs(y))
	{
	flag1=1;
	ie=i+1;	
	break;
	}
	}
		
}	

if(flag==1 && flag1==1)
cout<<max(ix,ie);
else
cout<<"-1";
		

	return 0;
}
