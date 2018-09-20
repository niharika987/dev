#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m;
  cin>>n>>m;
  int a1,a2;
  cin>>a1>>a2;
  int b1,b2;
  cin>>b1>>b2;
  int count=0;
     for(int i=1;i<=n;i++)
     {
     	for(int j=1;j<=m;j++)
     	{
     	
     
              int dx=abs(i-a1);
              int dy=abs(j-a2);
             
             
			  int dx1=abs(i-b1);
              int dy1=abs(j-b2);
             // cout<<dx1<<dy1<<endl;
                   
			  if(dx+dy==dx1+dy1)
              {
              count++;
     
      }
     }
	 } cout<<count;
    return 0;
}

