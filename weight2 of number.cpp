#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
#define md 1000000007
int main()
{
    long long int dp[21][10][301];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=9;i++)
            dp[1][i][0]=1;
    for(int i=2;i<=20;i++)
    {
            for(int j=0;j<=9;j++)
            {
                    long long int sum=0;
                    int k=0;
                    if(i==2) k++;
                    for(;k<=9;k++)
                    {
                                  for(int l=0;l<=200;l++)
                                  {
                                          if(dp[i-1][k][l]==0) continue;
                                          long long int ss=dp[i-1][k][l];
                                          int ab=k-j;
                                          if(ab<0) ab=0-ab;
                                          dp[i][j][l+ab]+=ss;
                                          dp[i][j][l+ab]=dp[i][j][l+ab]%md;
                                  }
                    }
            }
    }
    int t;
    cin>>t;
    while(t--)
    {
              int n,w;
              cin>>n>>w;
              long long int sum=0;
              for(int i=0;i<=9;i++)
                      sum=(sum+dp[n][i][w])%md;
              cout<<sum<<"\n";
    }
    return 0;
}
                       
