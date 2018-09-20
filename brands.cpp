#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> brands(n);
    for(int brands_i = 0; brands_i < n; brands_i++){
       cin >> brands[brands_i];
    }
    vector<int> prices(n);
    for(int prices_i = 0; prices_i < n; prices_i++){
       cin >> prices[prices_i];
    }
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int d;
        cin >> d;
        vector<int> cameras(d);
        for(int cameras_i = 0; cameras_i < d; cameras_i++){
           cin >> cameras[cameras_i];
        }
        int k;
        cin >> k;
        vector<int> a1;
        int x=0;
        while(x<d)
        { 
        for(int i=0;i<n;i++)
        {
            if(brands[i]==cameras[x])
        
                a1.push_back(prices[i]);
            
		        }
              x++;
        }
       sort(a1.begin(),a1.end());
       
        if(k>a1.size())
        cout<<"-1"<<endl;
        else
        cout<<a1[k-1]<<endl;
            
    }
    return 0;
}

