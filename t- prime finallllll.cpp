#include<bits/stdc++.h>

using namespace std;
set<long long int> s;
//int n=1000007;
 bool a[10000000];
void seive()
{
   
   memset(a,true,sizeof(a));
    a[0]=false;
    a[1]=false;
    for(int i=2;i*i<=1000000;i++)
    { if(a[i]==true)
    {
     for(int j=i*2;j<=1000000;j+=i)
        {
		 
		a[j]=false; 
            
        }  }
    }
    
   
   
}
int main()
{
    int n;
    cin>>n;
   
    seive();
while(n--)
{ long long int q;
 cin>>q;
	long long  x=ceil(sqrt(q));
		if((x*x)!=q)
		cout<<"NO"<<"\n";
		else
		{ if(a[x])
			cout<<"YES"<<"\n";
		  else
		  cout<<"NO"<<"\n";
		}
	}

    return 0;
}
