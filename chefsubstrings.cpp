#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
//char a[4]={'C','H','E','F'};
int a[4]={0};
int c=0,h=0,e=0,f=0;
  for(int i=0;i<s.length() ;i++)
  {
  	if(s[i]=='C')
  	a[0]++;
  	else if(s[i]=='H' && a[0]>a[1])
  	a[1]++;
  	else if(s[i]=='E' && a[1]>a[2])
  	a[2]++;
  	else if(s[i]=='F' && a[2]>a[3])
  	a[3]++;
  }
  
  
cout<<*min_element(a,a+4);
return 0;
}
