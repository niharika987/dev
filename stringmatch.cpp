#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		string s1="SUVO";
		string s2="SUVOJIT";
		int i=0,j=0,k=0;
		int count=0,count1=0;
		while(i<s.length())
{ 
	if(s[i]==s1[j])
	{
		while(s[i]==s1[j])
{
j++;
if(j==s1.length()-1)
{
	j=0;
	count++;
}

	
}	
}


if(s[i]==s2[k])
	{
		while(s[i]==s2[k])
{
k++;
if(k==s2.length()-1)
{
	k=0;
	count1++;
}

	
}	
}






i++;

}
cout<<"SUVO = "<<count-count1 <<" " <<"SUVOJIT = "<<count1<<endl;
	}
	
	return 0;
	
}
