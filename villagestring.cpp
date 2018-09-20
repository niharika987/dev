#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
cin>>n;
while(n--)
{ 
string v;
cin>>v;

int st=0;
int countt=0,count21=0;
int k=1;
while(st<v.length() )
{ 
if(v[st]=='A')
countt++;
else if(v[st]=='B')
count21++;
int flagg=0;
if(v[st]=='A' )
{ 
 int g1=0;


while(v[k]!='A' && k<v.length() )
{
 g1++;
 if(v[k]=='B')
 { flagg=1;
 break; }
 k++;
}

if(k==v.length())
{
	break;
}
if(flagg==0)
{ 

	st=k;
	k++;
	countt=countt+g1;

}
else if(flagg==1)
{
st=k;
k++;
continue;	
}

}

if(v[st]=='B')
{ int d=0;
while(v[k]!='B'  && k<v.length())
{
 d++;
 if(v[k]=='A')
 { flagg=1;
 break; }
 k++;
}
if(k==v.length())
break;
if(count21==0 && v[0]!='.')
{
d++;}
if(flagg==0)
{

	st=k;
	k++;
	count21=count21+d;

}
else if(flagg==1)
{
st=k;
k++;
continue;	
}
}

if(v[st]=='.')
{ 

st=k;
k++;

}
}
cout<<countt<<" "<<count21<<endl;
}
return 0;	
}
