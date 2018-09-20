#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) {
    // Complete this function
    string y;
    while(x1<x2)
    { 
        x1=x1+v1;
        x2=x2+v2;
       //cout<<x1<<x2;
    }
    if(x1==x2)
        y="YES";
        else
            y="NO";
    return y;
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}

