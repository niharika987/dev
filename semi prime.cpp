#include<bits/stdc++.h>
using namespace std;
const int n=1000007;
bool a[n];
void seive()
{
    memset(a,1,sizeof(a));
    for(int i=2;i*i<=n;i++)
    {
        if(a[i]==1)
        {
            for(int j=i*2;j<=n;j+=i)
            {
                a[j]=0;
            }
        }
    }
    
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    seive();
    while(t--)
    { vector<int> s;
     vector<int>::iterator i;
        int l,r;
        cin>>l>>r;
        int count=0;
        for(int i=l;i<=r;i++)
        {
            int x=i+2;
            if(x<=r)
            {
                if(a[x]==1)
                {count++; 
              
                 
                }
                else{
                   /* double y=sqrt(x);
                    int z=y;
                    if(((y*y)-x)==0)
                    { 
                        if(a[z]==1)
                        { 
                          
                            count++; }
                    }
                    else 
                    { */int j,f1=0,f2=0;
                        for( j=2;j<x/2;j++)
                        { 
                        if(x%j==0)
                        {
                        	if(a[j] && a[x/j])
                        	count++;
                        }
                            
                        }
                     //if(f1==1 && f2==1)
                       // count++;
                        
                    }
                }
            
        }//i=unique(s.begin(),s.end());
     //s.resize(distance(s.begin(),i));
     
     cout<<count<<endl;
    }
    return 0;
}

