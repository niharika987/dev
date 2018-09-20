#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ 
	int n,m,x,k;
	cin>>n>>m>>x>>k;
	char a[k];
	int e=0,o=0;
	for(int i=0;i<k;i++)
	{		cin>>a[i];
	if(a[i]=='E')
	e++;
	else
	o++;
	}
	
int ans=0;
for(int i=0;i<m;i++)
{
	

		if((i%2)==0)
		{
		
		int e1=min(o,x)	;
		o=o-e1;
		ans=ans+e1;	
		
		
		}
		else
		{
		
			int e1=min(e,x);
			e=e-e1;
			ans=ans+e1;
		
		}
		if(!(e) && !(o))
	break;	
	
}

if(ans>=n)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;



}


	return 0;
	
}
