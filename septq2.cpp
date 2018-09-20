#include <bits/stdc++.h>
using namespace std;

int main()
{ int b[100000]={0};
    

    int n;
    cin>>n;
    int c,a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        for(int j=1;j<=sqrt(a[i]);j++)
        { 
            if(a[i]%j==0)
            {
               c=a[i]/j;
            if(c!=j)
            {
            b[c]++;
            cout<<c<<"bc"<<b[c];
    
            b[j]++;
    cout<<j<<"bj"<<b[j];
	        }
            else{
                b[c]++;
            }
        
            }
            
            }
    
        }
    int q;
    cin>>q;
    while(q--)
    { int k;
    int count=0;
        cin>>k;
       cout<<b[k]<<endl;
    }
    
    return 0;
}

