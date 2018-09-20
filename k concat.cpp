#include <bits/stdc++.h>
using namespace std;
long long max(long long a,long long b)
{
    if(a>b)
        return a;
    return b;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
    	long long n,k;
    	cin>>n>>k;
    	long long ar[n+1];
    	for(int i=0;i<n;i++)	
    		cin>>ar[i];
    	if(k==1)
    	{
    		long long max_so_far=ar[0];
    		long long cur_max=ar[0];
    		for(int i=1;i<n;i++)
    		{
    			cur_max= max(cur_max+ar[i],ar[i]);
    			max_so_far= max(max_so_far,cur_max);
    		}
    		printf("%lld\n",max_so_far);
    	}
    	else{
    		long long total_sum=0;
    		for(int i=0;i<n;i++)
    			total_sum+=ar[i];
    		long long cur=0,mx=0;
    		long long ans=total_sum*(k-2);
    		for(int i=n-1;i>=0;i--)
    		{
    			cur+=ar[i];
    			if(cur>mx)
    				mx=cur;
    		}
    		ans+=mx;
    		mx=0;
    		cur=0;
    		for(int i=0;i<n;i++)
    		{
    			cur+=ar[i];
    			if(cur>mx)
    				mx=cur;
    		}
    		ans+=mx;
    		long long ar2[2*n+2];
    		for(int i=0;i<n;i++)
    			ar2[i]=ar[i];
    		for(int i=0;i<n;i++)
    			ar2[i+n]=ar[i];
    		long long cur_max=ar2[0];
    		long long max_so_far=ar2[0];
    		for(int i=1;i<2*n;i++)
    		{
    			cur_max=max(cur_max+ar2[i],ar2[i]);
    			max_so_far=max(max_so_far,cur_max);
    		}
    		ans=max(ans,max_so_far);
    		printf("%lld\n",ans);
    	}
    }
    return 0;
}  
