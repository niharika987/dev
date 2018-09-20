#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
    cin>>n;
  long long a[n];
  int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    sum=sum+a[i];
	}
	 
    int j=0,b[n];
    while(j<n)
    { 
    
    b[j]=sum-a[j];
    j++;
    
    }
    
   long min=*min_element(b,b+n);
   long max=*max_element(b,b+n);
    cout<<min<<" "<<max;
    return 0;
}
