// A quickly written program for reversing a string
// using reverse()
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str = "geeksforgeeks";
    
   // Reverse str[beign..end]
   reverse(str.begin(),str.end());
    
   cout << str;
   return 0;
}
