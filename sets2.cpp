#include <bits/stdc++.h>

using namespace std;
int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
int getTotalX(int x,int lcm,int a[], vector <int> b,int n,int m) {
    // Complete this function
        int count=0;
    
     sort(b.begin(),b.end());
    int g=a[n-1];
    int h=b[0];
  //  cout<<"g"<<g<<"h"<<h;
    for(int i=g;i<=h;i++)
    {
        if(i%lcm==0 && x%i==0)
        {// cout<<i;
            count++;
        }
        }
    return count;
    
}


int findlcm(int arr[], int n)
{
    // Initialize result
    int ans = arr[0];
 
    // ans contains LCM of arr[0],..arr[i]
    // after i'th iteration,
    for (int i=1; i<n; i++)
        ans = ( ((arr[i]*ans)) /
                (gcd(arr[i], ans)) );
 
    return ans;
}

int main() {
    int n;
    int m;
    int mul=1;
    cin >> n >> m;
   int a[n];
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    mul=mul*a[a_i];
	}
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }  
    int x=b[0];
for(int i=0;i<m;i++)
x=gcd(x,b[i]);
    int y=findlcm(a,n);
   //cout<<y<<x;
    int total = getTotalX(x,y,a, b,n,m);
    cout << total << endl;
    return 0;
}

