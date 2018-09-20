#include<bits/stdc++.h>
using namespace std;

int find1(int b[],int x,int y,int n )
    { int i;
        for( i=y;i<=n;i++)
        {
            if(b[i]==x)
        return i;
            
        }
        return -1;
    }
    
int main()
{
   int n,c;
   cin>>n>>c;
   
    int a[n];
    
    
   /* for(int i=1;i<n;i++)
    {
        cin>>a[i];
    }
    
	int b[n+1];
    
	for(int i=1;i<=n;i++)
    {
        
    cin>>b[i];
    }
    
    for(int i=1;i<=n;i++)
    {
   //   int c= find1(b,b[i],i+1,n);
    
   //     cout<<c<<" ";
    }*/
    //return 0;
}
