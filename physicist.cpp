#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0,sum1=0,sum2=0;
     for(int i=0;i<n;i++)
        {
    sum=sum+a[i][0];        
    	}
        
        for(int i=0;i<n;i++)
        {
    sum1=sum1+a[i][1];  
       }
        for(int i=0;i<n;i++)
        {
    sum2=sum2+a[i][2];        
   	}
		
      //  cout<<sum<<"ghjg"<<sum1<<"uyguh"<<sum2;
        if(sum==0 && sum1==0 && sum2==0)
        cout<<"YES";
        else
        cout<<"NO";
  
    return 0;
}
