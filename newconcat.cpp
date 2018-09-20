#include<bits/stdc++.h>
using namespace std;

long long maxsum(int b[], long long size)
{
    long long max1 =0, maxh = 0;
 
    for (int i = 0; i < size; i++)
    {
        maxh = maxh + b[i];
         if (maxh < 0)
            maxh = 0;
     	 else if (max1 < maxh)
            max1 = maxh;
 
       
    }
    return max1;
}
 

int main()
{
     int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	int sum=0,flag=0;
    	for(int i=0;i<n;i++)
    	{
    	if(a[i]<0)
    {
    	flag=1;
    sum=sum+a[i];
    }
    else
    {
    	sum=sum+a[i];
    }
    
	}
	if(flag==0)
{
	cout<<sum*k<<endl;
}	else
	{
	
	int b[2*n];
 int i=0,j=0,z=2;
    while(z)
    {
    	b[i]=a[j];
    	i++;
    	j++;
    	if(j==n)
    	{
    		j=0;
    		z--;
    	continue;
		}
    	
    }
    
   	long long n1 = sizeof(b)/sizeof(b[0]);
   	long long max_s = maxsum(b, n1);
    	max_s=max_s+(sum*(k-2));
    
    cout<<max_s<<endl;
	
	}
	}
	
	
return 0;
}
