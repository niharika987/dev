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
	//cout<<n<<c;
	int a[1000007]={0};
    
    
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
    }
    
	int b[10000007]={0};
    
	for(int i=1;i<=n;i++)
    {
        
    cin>>b[i];
    }
    
    int d[1000007]={0};
    for(int i=1;i<=n;i++)
    d[i]=-1;
    
    for(int i=1;i<=n;i++)
    {
      int c1= find1(b,b[i],i+1,n);
  //  cout<<c1;
        if(c1>0)
        d[c1]=i;
    }
 
for(int i=1;i<=n;i++)
 cout<<d[i]<<" ";
 
	return 0;
}
