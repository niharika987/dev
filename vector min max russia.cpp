#include <bits/stdc++.h>

using namespace std;

int revisedRussianRoulette(vector <int> doors) {
    // Complete this function

    int count=0,count1=0;
    for(int i=0;i<doors.size();i++)
    {
        
       // a1.push_back(count);
        
        if(doors[i]==1 && doors[i+1]==1)
        { doors[i+1]=0;
            count1++;
        }
        else if(doors[i]==1 && doors[i-1]==0 && doors[i+1]==0)
        {       count1++;
    }
   // a1.push_back(count1);
        
    }
    return count1;
    
    
}

int main() {
    int n;
    cin >> n;
    vector<int> doors(n);
    for(int doors_i = 0; doors_i < n; doors_i++){
       cin >> doors[doors_i];
    }
   /* vector <int> result = revisedRussianRoulette(doors);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }*/
     int count=0;
     for(int i=0;i<doors.size();i++)
    {
        
    if(doors[i]==1)
        {
         count++;   
        }
    }
    
    cout << revisedRussianRoulette(doors)<<" "<<count<<endl;


    return 0;
}

