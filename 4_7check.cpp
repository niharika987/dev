#include<iostream>
#include<sstream>
using namespace std;
int main()
{

unsigned long long int n;
cin>>n;
unsigned long long int x=n;
unsigned long long int count=0,count1=0;
while(x!=0)
{
	int y=x%10;
	if(y==4)
	count++;
	else if(y==7)
	count1++;
	x=x/10;
}
if((count+count1)==4 || (count+count1)==7)
cout<<"YES"<<endl;

else
cout<<"NO"<<endl;

	return 0;
}
