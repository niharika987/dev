#include<bits/stdc++.h>
using namespace std;
int main()
{
long long	int n,q;
	cin>>n>>q;
	long long int a[n+1];
// 	a[0]=0;
	for(int i=1;i<=n;i++)
	cin>>a[i];
	while(q--)
	{
		long long int b[n+1];
		memcpy(b,a,sizeof(b));
			
	long long	int q1;
		cin>>q1;
		if(q1==1)
		{
		long long	int updte,pos;
			cin>>pos>>updte;
			a[pos]=updte;
		}
		else if(q1==2)
		{ 
long long int per=0;
	int flag=0;
		long long	int l,r;
			cin>>l>>r;
		//	cout<<l<<r;
			sort(b+l,b+r+1);
		//	for(int i=1;i<=n;i++)
		//	cout<<b[i];
			long long int max=0;
			for(int i=l;i<=(r-2);i++)
			{
			if(((b[i]+b[i+1])>b[i+2])  )
			{ per=b[i]+b[i+1]+b[i+2];
			if(per>max)
		max=per;
			}
		
		}
		
	/*	if(flag==1)
		cout<<per<<"\n";
		else
		cout<<"0"<<"\n";
	*/
	cout<<max<<"\n";
	
	}
	
}


return 0;
}
