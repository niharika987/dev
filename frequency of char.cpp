#include<iostream>
using namespace std;
int main()
{
    char c;
    string s;
    cin>>c;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++)
    { if(s[i]==c)
    count++;
        
    }
    cout<<count;
    return 0;
}
