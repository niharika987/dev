#include <iostream>
using namespace std;

int main()
{
 long long k,n;
    cin>>k>>n;
    int n1;
    cin>>n1;
long long a[1007];    
    for(int i=0;i<n1;i++)
    cin>>a[i];
     int r=n/k;
    int i=0,count=0;
    while(k<n && i<n1)
    {
       if(r%a[i]==0)
        {k=k*a[i];
       
        i++;
        count++;
        }
        else{
            i++;
        }
        
            
       
    }
  if(k!=n)
  cout<<"-1";
  else
  cout<<count;
  return 0;
}

