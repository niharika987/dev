#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {//int x;
     cin>>a[i];
       //a.push_back(x);
    }
    int q;
    cin>>q;
    q=q-1;
    a.erase(a.begin()+q);
    //cout<<a.size();
    int q1,q2;
            
    cin>>q1>>q2;
    q1=q1-1;
    a.erase(a.begin()+q1,a.begin()+(q2-1));
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
      cout<<a[i]<<" ";
        return 0;
}

