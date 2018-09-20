#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7]={1,2,3,3,4,5,6};
int b[3]={3,3,5};
map<int,int> m;
for(int i=0;i<7;i++)
{
	m[a[i]]=1;
}
vector<int> d;
for(int i=0;i<3;i++)
{
	if(m[b[i]]==1)
	d.push_back(b[i]);
}
for(int i=0;i<d.size();i++)
cout<<d[i];

	return 0;
}
