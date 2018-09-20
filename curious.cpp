#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
      
      int f=0,i=0;
      while(i<n-1)
      { 
	  if(a[i]==b[i])
	  {
	  	i++;
	  	continue;
	  } 
	 else 
	 {
	 a[i]--;
	 a[i+1]--;
	 	
	 }
 }
 for(int i=0;i<n;i++)
 {
 	if(a[i]!=b[i])
 {
 f=1;
 break;}
 
 }
      
      if(f==1 )
      cout<<"NO"<<endl;
      else
      cout<<"YES"<<endl;
      

    }
    return 0;
}

