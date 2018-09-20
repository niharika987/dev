#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++)

#define clr(a,n) memset(a,n,sizeof(a))
int hash[26];
bool pallindromes()
{ int i;
bool f=false;
f(i,26)
{

if(f && hash[i]%2) {
return false;	
}	
if(!f && hash[i]%2)
{
	f=true;
}
return true;

}
}
int main()
{
	 int t;
	 cin>>t;
	 while(t--)
	 { clr(hash,0);
	 	string s;
	 	cin>>s;
	 	f(i,s.length())
	 	hash[s[i]-'a']++;
	 	
	 if(pallindromes())
	 cout<<"YES"<<endl;
	 else
	 cout<<"NO"<<endl;
	 	
	 }
	return 0;
}
