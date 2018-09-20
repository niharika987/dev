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
		int i=0,c=0;
		while(i<n)
		{ 	if(i+1==n)
				break;
			if((a[i+1]-a[i])<=d)
			{
				c++;
				i=i+2;
			
			}
			else
			{
				i++;	
		
			}
			
				
	
		}
		cout<<c<<endl;
	return 0;
}
