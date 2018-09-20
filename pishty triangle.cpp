#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int a[n+1];
	a[0]=0;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	while(q--)
	{
		int b[n+1];
		memcpy(b,a,sizeof(b));
		int q1;
		cin>>q1;
		if(q1==1)
		{
			int updte,pos;
			cin>>pos>>updte;
			a[pos-1]=updte;
		}
		else if(q1==2)
		{ 
		int per=0,flag=0;
			int l,r;
			cin>>l,r;
			sort(b+1,b+5);
			for(int i=1;i<=n;i++)
			cout<<b[i];
			
		/*	for(int i=l-1;i<r-3;i++)
			{
			if(b[i]+b[i+1]>b[i+2])
			{ per=b[i]+b[i+1]+b[i+2];
			flag=1;
			break;	
			
			}
			else
			{
			continue; }
			
		}*/
		if(flag==1)
		cout<<per<<"\n";
		else
		cout<<"0"<<"\n";
	}
}


return 0;
}
