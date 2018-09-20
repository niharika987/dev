#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s;
	    cin>>n>>s;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    int f=0,f1=0;
	    int csum=0;
	   unordered_map<int,int> m;
	 for(int i=0;i<n;i++)
	 {
	     csum=csum+a[i];
	     
	         if(csum==s)
	     {f=1;
	         cout<<"1"<<" "<<i+1<<endl;
	         break;
	     }
	     
	     if(m.find(csum-s)!=m.end())
	     {f1=1;
	     cout<<m[csum-s]+2<<" "<<i+1<<endl;
	     break;}
	  
	     m[csum]=i;
	 }
	 
	 if(f1==0 && f==0)
	 cout<<"-1"<<endl;
	 
	}
	return 0;
}
