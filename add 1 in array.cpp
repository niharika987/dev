#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
	cin>>a[i];

	int b[n+2];
	b[0]=0;
	for(int i=0;i<n;i++)
	b[i+1]=a[i];
	
	int j=n-1,k=n;
	int c=0;
		if((a[j]+1)<=9)
		{
		 b[k]=a[j]+1;
		// cout<<b[k];
	}
	else{
		c=1;
	    b[k]=0;
	    j--;
	    k--;
	while((a[j]+c)>9 && j>=0)
	{ 
	b[k]=0;
	j--;
	k--;
	}
	if(k==0)
	b[k]=1;
	else
	b[k]=a[j]+c;
	
	}
  if(b[0]==0)
  {
  	for(int i=1;i<=n;i++)
  	cout<<b[i];
  }
  else{
  	for(int i=0;i<=n;i++)
  	cout<<b[i];
  }
	return 0;
}
