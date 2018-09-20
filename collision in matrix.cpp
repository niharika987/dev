#include<bits/stdc++.h>
#define fi(i,r) 	for(int i=0;i<r;i++)
#define fo(j,c) 	for(int j=0;j<c;j++)
	int r,c;
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
		cin>>r>>c;
		int a[r][c];
		string s[r],s1;
	fi(i,r)
		{ cin>>s[i];
			s1=s[i];
			fo(j,c)
			a[i][j]=(int)s1[j]-48;
		} int count=0,count1=0;
	
	 count1=0;
	fo(j,c)
	{ count=0;
		fi(i,r)
		{
			if(a[i][j]==1)
			count++;
		}
		
		while(count){
			count--;
			count1=count1+count;
		}
	}
	cout<<count1<<endl;
	}
	return 0;
}
