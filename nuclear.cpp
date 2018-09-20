#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,k,n;
	cin>>a>>n>>k;
	int b[k];


	for(int i=0;i<k;i++)
	{
		b[i]=0;
	}
	
		int i=0;	
	while(a>0)
	{
		
a--;
//cout<<i<<b[i];
	
	
		if(b[i]<n)
		{ 
		b[i]++;
	}
	
else if(b[i]==n && i!=k-1)
	{ int j;

	for( j=i+1;j<k;j++)
	{
		if(b[j]<n)
		break;
	else
	b[j]=0;
	}

	b[j]++;
	

	b[i]=0;		

	
	}
	
	
	
	
else if(b[i]==n && i==k-1)
	{
		b[i]=0;


	}


	
}
	for(int i=0;i<k;i++)
	{
		cout<<b[i]<<" ";
	}
	
	return 0;
}
