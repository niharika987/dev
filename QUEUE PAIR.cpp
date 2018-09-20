#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	queue<pair<int,int> > q;
	pair<int,int> x;
	for(int i=0;i<n;i++)
{
	cin>>a[i];
x=make_pair (i,a[i]);
	q.push(x);
}

	pair<int,int> y;
while(!q.empty())
{
 y=q.front();
 	//cout<<y.first;  
	q.pop();
	if(y.second<=m)
	continue;
	else
	{
	y.second=y.second-m;
q.push(y);
}

}
cout<<y.first+1;

	return 0;
	
}
