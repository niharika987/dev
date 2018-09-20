#include<iostream>
#include<algorithm>
#include<cmath>
#include<limits.h>
 
typedef long long int lll;
typedef long int ll;
typedef int l;
typedef double dd;
typedef char cc;
 
#define f(i,n) for(i=0;i<n;i++)
#define fi(i,a,n) for(i=a;i<n;i++)
#define ve vector
#define fd(i,n) for(i=n-1;i>=0;i--)
#define pb push_back
#define clr(a,n) memset(a,n,sizeof(a))
#define Devil202 ios_base::sync_with_stdio(false);cin.tie(NULL);
 
using namespace std;
lll countSetBits(lll n)
{
    lll count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
 
int main(){
 
	Devil202
	
	lll i,j,k;
	/*#ifndef ONLINE_JUDGE
		freopen("./input.txt","r",stdin);
		freopen("./output.txt","w",stdout);
	#endif*/
	while(!cin.eof())
	{
		cin>>j;
//		cout<<__builtin_popcount(j)<<endl;
		cout<<countSetBits(j)<<endl;
	}
}
