#include<bits/stdc++.h>
using namespace std;
#define MAX_CHAR 256
bool isPalindrome(string str, int l, int h)
{
    while (h > l)
        if (str[l++] != str[h--])
            return false;
 
    return true;
}
 
int check(string str)
{
    int n = str.length();
 
    int freq[MAX_CHAR] = { 0 };
 
    for (int i = 0; i < n; i++)
    {
        freq[str[i]]++;
 
       if (freq[str[i]] > 3)
            return true;
    }
 
     int k = 0;
    for (int i = 0; i < n; i++)
        if (freq[str[i]] > 1)
            str[k++] = str[i];
    str[k] = '\0';
 
    if (isPalindrome(str, 0, k-1))
    {
         if (k & 1)
            return str[k/2] == str[k/2 - 1];
 
        return false;
    }
 
    
    return true;
}
 

int main()
{
    int t;
    cin>>t;
    while(t--)
 
 {
 string s;
 cin>>s;
    if (check(s))
        cout << "yes"<<endl;
    else
        cout << "no"<<endl;
}
    return 0;
}

