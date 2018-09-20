#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int x=s.length();
    char a[x];
    
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        char c=s[i];
        if(strchr(a,c)==NULL)
        {
            a[j]=c;
            j++;
        }
    }
    for(int i=0;i<j;i++)
    cout<<a[i];
}
