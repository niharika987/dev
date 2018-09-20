// C++ program to print all permutations with
// duplicates allowed using next_permute()
#include <bits/stdc++.h>
using namespace std;
 
// Function to print permutations of string str
// using next_permute()

void permute(string str)
{
    // Sort the string in lexicographically
    // ascennding order
string s=str;
    sort(s.begin(), s.end(),greater<int>());
 
    // Keep printing next permutation while there
    // is next permutation
    do {

    
	   cout << s<< endl;
	   
	   
    } while (next_permutation(s.begin(), s.end()));
}
 
// Driver code
int main()
{
    string str = "chef";
    permute(str);
    return 0;
}
