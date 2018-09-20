#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n=2147483625;
//	string binary = std::bitset<8>(n).to_string();
char res[1000];
itoa(n,res,2);
cout<<res;
	return 0;
}
