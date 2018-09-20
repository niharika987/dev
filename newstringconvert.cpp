#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{ 
		string s;
		getline(cin,s);
	char a[s.length()];
		for(int i=0;i<s.length();i++)
		{
		
		 
			char c=s[i];
			if(c>=65 && c<=91)
		//	a[i]=(int)(s[i]-65)+1;
		cout<<(int)(s[i]-65)+1;
			
	else if(c>=97 && c<=123)
		//	a[i]=(int)(s[i]-65)+1;
		cout<<(int)(s[i]-97)+1;
		
		else if(c==' ')
		cout<<"$";
	
	
	
		}
		cout<<endl;
	
}
}
