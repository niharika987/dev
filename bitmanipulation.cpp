#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int z,n;
        cin>>z>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int flag=0;
        for(int i=0;i<(1<<n);i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i& (1<<j))
                { 
                  if((a[j]&z)==0)
                  {
                  	flag=1;
                  	break;
                  }
                }
            }
        }
        if(flag==1)
        cout<<"Yes"<<"\n";
        else
        cout<<"No"<<"\n";
    }
    return 0;
}
