#include<iostream>
#include<sstream>
using namespace std;
int main()
{

int n;
cin>>n;
int x=n;
int flag=0;
int a[10]={0};
//int a = 10;
stringstream ss;
ss << x;
string st = ss.str();
unsigned long int count=0;
//cout<<str;
for(int i=0;i<st.size();i++)
{ //cout<<count; 
if(st[i]=='4' || st[i]=='7')
count++;
}

if(count==4 || count==7)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

	return 0;
}
