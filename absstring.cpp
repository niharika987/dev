#include <bits/stdc++.h>

using namespace std;

string funnyString(string s){
    // Complete this function
    string s1=s;
    int flag=0;
    reverse(s1.begin(),s1.end());
    for(int i=1;i<s.length();i++)
    {
        int x=abs(s[i]-s[i-1]);
        int y=abs(s1[i]-s1[i-1]);
        if(x!=y)
        {       flag=1;
        break;
    }  
            
    }
    if(flag==1)
        return "Not Funny";
    else 
        return "Funny"; 
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        string result = funnyString(s);
        cout << result << endl;
    }
    return 0;
}

