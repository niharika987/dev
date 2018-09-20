#include<bits/stdc++.h>
using namespace std;
int main()
{
    
int t;
cin>>t;
while(t--)
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
  long long i=0,j=n-1,sum1=0,sum2=0;
    
    while(i<=j)
            {
                if(sum1<=(2*sum2))
                {
                    while((sum1<=2*sum2)&&i<=j)
                    {
                        sum1+=a[i];
                        i++;
                    }
                }
                else
                if(sum1>sum2)
                {
                    while((sum1>2*sum2)&&j>=i)
                    {
                        sum2+=a[j];
                        j--;
                    }
                }
            }
            long long p,q;
            p=i;q=n-j-1;
            cout<<n<<j;
            cout<<p<<" "<<q<<endl;
            if(p>q)
            cout<<"Motu"<<endl;
            else
            if(q>p)
            cout<<"Patlu"<<endl;
            else
            cout<<"Tie"<<endl;
       
}
    
    
    
    
    return 0;
    
}
