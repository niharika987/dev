#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ int x,count=0;
cin>>x;
for(int i=1;i<x;i++)
{
	if((x%i)==0)
	count++;
	
}
//cout<<count;
if(count>1)
cout<<"no"<<endl;
else
cout<<"yes"<<endl;

}



return 0;

}
