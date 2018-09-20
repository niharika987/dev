 #include<bits/stdc++.h>
using namespace std;
void rec(int a[],int n,int i,int sum,vector<vector<int> > &v, vector<int> &r )
{
	if(sum<0)
	return;
	if(sum==0)
	{
		v.push_back(r);
		return;
	}
	for(int j=i;j<n;j++)
	{
		r.push_back(a[j]);
		rec(a,n,j,sum-a[j],v,r);
	r.pop_back();
	}
}
int main()
{ int a[4]={2,4,6,8};
int s=8;
int i=0;
vector<vector<int> > v;
vector<int> r;
rec(a,4,i,s,v,r);
for(int i=0;i<v.size();i++)
{ for(int j=0;j<v[i].size();j++) 
	cout<<v[i][j];
cout<<endl;
}
	return 0;
}
