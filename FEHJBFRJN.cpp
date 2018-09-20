

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int numstu;
		cin>>numstu;
		int a,b;
		cin>>a>>b;
		int n;
		cin>>n;
		int j=0,c;
		
	//	int stu[n];
		while(j<=n)
		{
			for(int i=a;i<=b;i++)
			{
			//	stu[j]=i;
					j+=1;
				if(j==n)
				{
					c=i;
					break;
				}
			
			}
		}
		cout<<c<<"\n";
	}
}





