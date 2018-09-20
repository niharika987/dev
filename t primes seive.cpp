#include<bits/stdc++.h>

using namespace std;
set<long long int> s;
int n=100007;
void seive(){
    bool a[100007];
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
    s.insert(a[i]);
     }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	seive();
	for(int i=0;i<n;i++)
	{ //std::set<long long int>::iterator it
		int x=sqrt(a[i]);
	if(s.find(x) != s.end())
	cout<<"YES"<<"\n";
	else
	cout<<"NO"<<"\n";
	}
	    //seive(n);
    
    return 0;
}
