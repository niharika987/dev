#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];

	int d;
	cin>>d;

queue<int>q;
q.push(d);
while(!q.empty())
{
	int x=q.front();
	a[x]=-10;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		q.push(i);
	}
	q.pop();
	
}

int c=0;
for(int i=0;i<n;i++)
{ int flag=0;

	if(a[i]==-10)
		{ continue;
		}
	for(int j=0;j<n;j++)
	{
	if(a[j]==i)
		{flag=1;
		break;
		}
	}
	if(flag==0)
	c++;
}
cout<<c;

    return 0;
}

