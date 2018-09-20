#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{ string s;
cin>>s;
cout<<s;
int i=0;
string s1;
size_t nPos = s.find('h', 0); 
size_t nPos1 = s.find('e', nPos+1); 
size_t nPos2 = s.find('l', nPos1+1); 
size_t nPos3 = s.find('l', nPos2+1); 
size_t nPos4 = s.find('o', nPos3+1); 

if(nPos == string::npos || nPos1 == string::npos || nPos2 == string::npos || nPos3 == string::npos || nPos4 == string::npos)
cout<<"NO";
else
cout<<"YES";

 return 0;
}
