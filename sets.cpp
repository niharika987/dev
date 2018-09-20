#include <bits/stdc++.h>

using namespace std;
int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
int getTotalX(vector <int> a, vector <int> b,int n,int m) {
    // Complete this function
        int count=0,flag=0,flag1=0;
     sort(a.begin(),a.end());
     sort(b.begin(),b.end());
    int g=a[n-1];
    int h=b[0];
    
    for(int i=g;i<=h;i++)
    {
        for(int j=0;j<n;j++)
        { cout<<a[j];
        	if(i%a[j]!=0)
        	{
        	flag=1;
        	break;}
        }
        for(int k=0;k<m;k++)
        { cout<<b[k];
        	if(b[k]%i!=0)
        	{
        	flag1=1;
        	break;
			}
        }
        
        if(flag==0 && flag1==0)
        {
        count++;
         cout<<i;     
         }
		 }
    return count;
    
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }  
    


    int total = getTotalX(a, b,n,m);
    cout << total << endl;
    return 0;
}

