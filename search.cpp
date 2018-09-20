#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
    cin>>n;
  long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    int j=0,b[n];
    while(j<n)
    { long long sum=0;
    int x=a[j];
    for(int i=0;i<n;i++)
    { if(i==j)
    continue;
    else
    sum=sum+a[i];
        
    }
    b[j]=sum;
    j++;
    
    }
    for(int i=0;i<n;i++)
    cout<<b[i];
   long min=*min_element(b,b+n);
   long max=*max_element(b,b+n);
    cout<<min<<" "<<max;
    return 0;
}
