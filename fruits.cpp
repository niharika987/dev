#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,f=0;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a,b;
		cin>>a>>b;
	int a1=0,b1=0,k=a;
	for(int i=0;i<s.length();i++)
	{
	if(s[i]=='a')
	a1++;
	else
	b1++;
	} 

	int f=0,v=0,i=a,j=b;
char s1[s.length()+13];

for(int i=0;i<s.length();i++)
{
	if(a1>=b1)
	s1[i]='a';
	else
	s1[i]='b';
}
int v1=a1,v2=b1;
while(i<s.length())
{  
   if(s1[0]=='a' )
   {
   
   if(v2==0 )
   {
   
	  s1[i]='*';
	  s1[i+1]='a'; 
   i=i+a+1;
v1--;
   f++;
   }
   else{
   	s1[i]='b';
   v2--;
v1--;
   i=i+a+1; 
   }
   
   }
   
   else if(s[0]=='b'){
   	
    if(v1==0 )
   {
   	
	  s1[i]='*';
	  s1[i+1]='b'; 
   i=i+b+1;
   f++;
   v2--;
   }
   else{
   
   s1[i]='a';
   v1--;
   v2--;
   i=i+j+1;
   }
    
}

}


if(v1!=0)
{ while(v1!=0)
{

	s1[i]='*';
	s1[i+1]='a';
	f++;
	
	 v1--;
}
f=f-a;
}
else if(v2!=0)
{
while(v2!=0)
{

	s1[i]='*';
	s1[i+1]='b';
	f=f+1; v2--;
}	f=f-b;
}

for(int m=0;m<s.length()+f;m++)
cout<<s1[m];
} cout<<endl;
	return 0;
}
