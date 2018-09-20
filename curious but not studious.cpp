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
        int f=1;
        int x=abs(a[0]-b[0]);
        int i=0;
        while(i<n)
        { if(f==0)
        { x=abs(x-b[i]);
        f=1;
         //cout<<x<<endl;
         i++;
        }
         else{
         x=abs(x-a[i]);
           //  cout<<x<<endl;
             f=0;
         }
            
        }
        if(x==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

