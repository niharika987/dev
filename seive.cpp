#include<bits/stdc++.h>

using namespace std;
void seive(int n){
    bool a[n+1];
    memset(a,true,sizeof(a));
    for(int i=2;i*i<=n;i++)
    { if(a[i]==true)
    {
     for(int j=i*2;j<=n;j+=i)
        {
		 
		a[j]=false; 
            
        }  }
    }
    
    for(int i=2;i<=n;i++)
    { if(a[i])
    cout<<i<<" "; }
}
int main()
{
    int n;
    cin>>n;
    seive(n);
    return 0;
}
