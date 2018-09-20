#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++)

#define fi(i,a,n) for(int i=a;i<n;i++)
#define clr(a,n) memset(a,n,sizeof(a))
int has[26];
int hash1[26];
bool pallindromes(int has[] ,int hash1[])
{ int i;
bool f=false;
f(i,26)
{

if(has[i]!=hash1[i])
return false;

}
return true;
}
int main()
{
	 int t;
	 cin>>t;
	 while(t--)
	 { clr(has,0);
	 clr(hash1,0);
	 	string s;
	 	cin>>s;
	 	f(i,s.length()/2)
	 	has[s[i]-'a']++;
	 	if(s.length()%2==0)
	 {
	 	for(int i=s.length()/2;i<s.length();i++)
	 	 	hash1[s[i]-'a']++;
}
else
{
		for(int i=(s.length()/2)+1;i<s.length();i++)
	 	 	hash1[s[i]-'a']++;
}
	 if(pallindromes(has,hash1))
	 cout<<"YES"<<endl;
	 else
	 cout<<"NO"<<endl;
	 	
	 }
	return 0;
}
