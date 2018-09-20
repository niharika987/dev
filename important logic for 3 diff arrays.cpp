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
	
			int c[n],l[n],d[n];
			for(int i=0;i<n;i++)
			cin>>c[i]>>l[i]>>d[i];
			int r1=0,r2=0,r3=0,s1=10000,s2=10000,s3=10000;
			for(int i=0;i<n;i++)
			{
				if(l[i]==1)
				{
					if(r1<d[i] || (r1==d[i] &&  s1>c[i]))
					{
					r1=d[i];
				s1=c[i];
				}
				
				}
				
				if(l[i]==2)
				{
					if(r2<d[i] || (r2==d[i] &&  s2>c[i]))
					{
					r2=d[i];
				s2=c[i];
				}
				
				}
				
				if(l[i]==3)
				{
					if(r3<d[i] || (r3==d[i] &&  s3>c[i]))
					{
					r3=d[i];
				s3=c[i];
				}
				
				}
			}
				
				cout<<r1<<" "<<s1<<endl;
				cout<<r2<<" "<<s2<<endl;
				cout<<r3<<" "<<s3<<endl;
				
				
			
			
	
	}
	return 0;
}
