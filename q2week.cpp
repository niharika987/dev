#include <bits/stdc++.h>

using namespace std;

void tripleRecursion(int n, int m, int k) {
    // Complete this function
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 && j==0)
                a[i][j]=m;
            else if(i==j)
                a[i][j]=a[i-1][j-1]+k;
            else if(i>j)
                a[i][j]=a[i-1][j]-1;
            else if(i<j)
                a[i][j]=a[i][j-1]-1;
        }
    }
    for(int i=0;i<n;i++)
    {
        
        for(int j=0;j<n;j++)
        {cout<<a[i][j]<<" ";}
        cout<<endl;
    }
}

int main() {
    int n;
    int m;
    int k;
    cin >> n >> m >> k;
    tripleRecursion(n, m, k);
    return 0;
}

