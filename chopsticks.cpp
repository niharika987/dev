#include<bits/stdc++.h>
using namespace std;
int main()
{
	
		int n, d;
		cin>>n>>d;
		int a[n];
		for (int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		set<int> x;
		for(int i=0;i<n;i++)
		{
			x.insert(a[i]);
		}
		
				
	
		int f=0,i=0,c=0;
		set<int>:: iterator it;
		set<int> ::iterator it1;
		for(it=x.begin(); it!=x.end(); it++)
		{
			for( it1=it; it1!=x.end(); it1++)
			{
				
			
			
				if((*it1-*it)<= d && (*it1-*it)!=0)
				{ //cout<<*it1<<*it<<endl;
					c++;
					
				}	
			
			}
		
		}
		
		cout<<c<<endl;
	return 0;
}
