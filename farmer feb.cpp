#include<bits/stdc++.h>
using namespace std;
int x=100000;
void seive(int n){
    bool a[x];
    memset(a,true,sizeof(a));
    for(int i=2;i*i<=x;i++)
    { if(a[i]==true)
    {
     for(int j=i*2;j<=x;j+=i)
        {
		 
		a[j]=false; 
            
        }  }
    }
    //cout<<n;
    for(int i=n+1;i<=x;i++)
    { if(a[i])
    {
    	cout<<i-n<<"\n";
    	break;
    }
    
    }
}
int main()
{
int t,f1,f2,sum;
cin>>t;
while(t--)
{
	sum=0;
cin>>f1>>f2;
sum=f1+f2;
seive(sum);



}

return 0;
} 
