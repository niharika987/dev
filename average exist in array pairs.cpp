#include<bits/stdc++.h>
 
using namespace std;
long long int hshh[100000];
long long int hsh(int a[],int n)
{
long long  int count=0;
 for(int i=0;i<20007;i++)
{ if(hshh[i]!=0)
{

	for(int j=i;j<20007;j++)
	{ if(hshh[j]!=0)
	{
	
		if((i+j)%2==0 )
		{  int g=(i+j)/2;
			if(hshh[g]!=0)
				{
					if(i!=j)
					count+=hshh[i]*hshh[j];
					else
					count+=(hshh[i]*(hshh[i]-1))/2;
					// division by 2 is to remove redundancy as f[a]* f[b] counts pair (a,b) & (b,a) in case , a==b , (a,a) will be counted twice 
									//and hsh[i]-1 is suppose freq =1 , it means no other element therefore we do this. 
									
									}
		}
	}
	
	}
} }

	return count;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{ memset(hshh,0,sizeof(hshh));
		int n;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
	{
		cin>>a[i];
		hshh[a[i]+1000]++;
	}	//sort(a,a+n);
long long int x=hsh(a,n);
	cout<<x<<"\n";
	}
	return 0;
} 
