#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{ int s,n;
cin>>s>>n;
int s1,b;
vector< pair< int,int > > s2;
	pair<int,int> x;
for(int i=0;i<n;i++)
{
cin>>s1>>b;
x=make_pair (s1,b);
s2.push_back(x);
}
sort(s2.begin(),s2.end());
int flag=0;
for(int i=0;i<n;i++)
{
	if(s2[i].first<s)
	s=s+s2[i].second;
else
{
	flag=1;
	break;
}

}
if(flag==1)
cout<<"NO";
else
cout<<"YES";
return 0;
}
