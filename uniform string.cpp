#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
cin>>s;
int count=0;
for(int i=0;i<8;i++)
{
	if(s[i]=='1')
	count++;
}
int count1=8-count;
if(count<=2 || count1<=2)
cout<<"uniform"<<endl;
else
cout<<"non-uniform"<<endl;


}
	return 0;
}
