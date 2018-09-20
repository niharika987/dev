#include<bits/stdc++.h>
using namespace std;

int Solve (string S) {
   // Write your code here
  string s1=S;
  reverse(S.begin(),S.end());
int x=0;
if(s1==S)
{

return x;
}
else
{
	x=s1.length();
	return x;
}



}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while(T--)
    {
    
        string S;
       cin>>S;

        int out_;
        out_ = Solve(S);
        cout << out_;
        cout << "\n";
    }
}
