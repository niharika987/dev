#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k,n;
		cin>>x>>y>>k>>n;
		int r=x-y;
		vector< pair<int,int> >p;
		for(int i=0;i<n;i++)
		{
			int pi,ci;
			cin>>pi>>ci;
			p.push_back({ci,pi});
		}
		sort(p.begin(),p.end());
		int f=0;
		for(int i=0;i<p.size();i++)
		{
				if(p[i].first<= k && p[i].second>=r)
				{
				f=1;
				break;
				}
			
		}
		if(f==0)
		cout<<"UnluckyChef"<<endl;
		else
		cout<<"LuckyChef"<<endl;
	}
	return 0;
}
