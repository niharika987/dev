#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int n,i=0;
    cin>>n;
    int a[n];
    int q;
    while(n--)
    {
        cin>>q;
        if(q==1)
        { 
            if(i==0)
        {
        cout<<"NO FOOD"<<endl;
    }
        else if(a[i]==0)
     {
            cout<<"NO FOOD"<<endl;
     }
	        else
     {
            cout<<a[i]<<endl;
 i=i-1;
 }
	    }
        else{i=i+1;
            cin>>a[i];
            
        }
    }
}
