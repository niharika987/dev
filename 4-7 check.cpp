#include<iostream>
#include<sstream>
using namespace std;
int main()
{

unsigned long long int n;
cin>>n;
unsigned long long int x=n;
//int a = 10;
stringstream ss;
ss << x;
string str = ss.str();
unsigned long int count=0,count1=0;
//cout<<str;
for(int i=0;i<str.size();i++)
{
	if(str[i]=='4' )
 count++;
else if(str[i]=='7')
count1++;
}

if(count+count1==4 || count+count1==7)
cout<<"YES"<<endl;
else if(count==4 || count==7)
cout<<"YES"<<endl;
else if(count1==4 || count1==7)
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;

	return 0;
}
