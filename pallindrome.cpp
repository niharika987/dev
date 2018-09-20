#include <bits/stdc++.h>

using namespace std;

string gameOfThrones(string s){
    // Complete this function
    int a[26]={0};
    string s1;
    int count=0,count1=0;
    for(int i=0;i<s.length();i++)
    {
        int d=(s[i]-97);
        a[d]++;
        
  
    }
    //for(int i=0;i<26;i++)
   // {// cout<<a[i];
   for(int i=0;i<s.length();i++)
   {
   
        if(s.length()%2==0)
        {
            if(a[s[i]-97]%2!=0)
             count1++;
             cout<<count1;
                    }
        else if(s.length()%2!=0)
        {
            if(a[i]%2!=0)
               count++; 
        }
        
    }
    if(s.length()%2==0)
    {
    if(count1!=0)
        s1="NO";
    else s1="YES";
    }
    else {
    if(count>1)
        s1="NO";
    else s1="YES";
    }
   return s1; 
   
}

int main() {
    string s;
    cin >> s;
    string result = gameOfThrones(s);
    cout << result << endl;
    return 0;
}

