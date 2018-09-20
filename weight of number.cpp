#include<stdio.h>
    #include<math.h>
    #include<stdlib.h>
     
    #define MOD 1000007
     
    int w, n;
     
    int dp[30][312][24];
     
    int solve(int idx, int wt, int lastDigit){
    	if(wt>w || idx > n)
    		return 0;
    	
    	if(idx==n)
    		 return wt == w;
    	
    	if(dp[idx][wt][lastDigit] != -1)
    		return dp[idx][wt][lastDigit];
    	
    	int i, sum = 0;
    	for(i=0; i<=9; i++){
    		sum += solve(idx+1, wt + abs(i-lastDigit), i);
    		if(sum >= MOD)
    			sum -= MOD;
    	}
    	
    	return (dp[idx][wt][lastDigit] = sum);
    }
     
    int main(){
    	int t, i, j, k;
    	scanf("%d",&t);
    	while(t--){
    		for(i=0; i<=21; i++)
    			for(j=0; j<=200; j++)
    				for(k=0; k<=9; k++)
    					dp[i][j][k] = -1;
    		int ans = 0;
    		scanf("%d%d",&n,&w);
    		for(i=1; i<=9; i++){
    			ans += solve(1, 0, i);
    			if(ans >= MOD)
    				ans -= MOD;
    		}
    		printf("%d\n",ans);
    	}
    	return 0;
    }  
 
