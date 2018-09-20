#include<iostream>

#define fzk ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{ fzk
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int c=1;
		int c1=a[0];
		for(int i=1;i<n;i++)
		{
			if(c1>a[i])
			{
			c++;
			c1=a[i];
			 
			}
		}
		cout<<c<<"\n";
	}
	return 0;
}
