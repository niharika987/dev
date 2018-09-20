#include<iostream>
#include<climits>
using namespace std;
 
long long maxsum(long long b[], long long size)
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
    long long b[n*k];
    int i=0,j=0,z=k;
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
    
    
    cout<<max_s<<endl;

	
	}
    return 0;
}
/*
 int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
   
    cout << "Maximum contiguous sum is " << max_sum;
    */
