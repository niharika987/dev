#include <bits/stdc++.h>

using namespace std;

long getWays(long n, vector < long > c){
    // Complete this function
    long int x=c.size();
    	long t[c.size()][n+1];
	for(int i=0;i<x;i++)
	t[i][0]=1;
	for(int i=0;i<=n;i++)
	t[0][i]=1;
	
	for(int i=1;i<x;i++)
	{ //cout<<"i"<<i<<endl;
		for(int j=1;j<=n;j++)
		{ // cout<<"j"<<j;
		
			 if(c[i]>j)
		t[i][j]=t[i-1][j];
			else
			t[i][j]=t[i-1][j]+t[i][j-c[i]];
		}
	}
	return t[x-1][n];
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<long> c(m);
    for(int c_i = 0; c_i < m; c_i++){
       cin >> c[c_i];
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long ways = getWays(n, c);
    return 0;
}

