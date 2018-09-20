#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		string result="yes";
		if(a[(n/2)]!=7)
	{
	result="no";
	}	else{ int x=1;
			for(int i=0;i<(n/2);i++)
			{
				if(a[i]==x && (a[i+1]==x+1 || a[i+1]==x) && a[i]==a[n-i-1])
				{
				if(a[i+1]==x+1)
				x++;
				continue;
				
				}else
				{
				
				result="no";
				break;}
			
			}
			
		}cout<<result<<endl;
		
	}
}
