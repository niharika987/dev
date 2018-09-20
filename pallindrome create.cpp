#include <bits/stdc++.h>

using namespace std;

void new1(string s)
{
	string s3,m,right;
	int a[26]={0};
    for(int i=0;i<s.length();i++)
    {
        int d=(s[i]-97);
        a[d]++;   
    }
    for(int i=0;i<26;i++)
    {
    	while(a[i]>1)
    	{
    	char c=(char)(i+97);
    	s3=s3+c;
    	a[i]=a[i]-2;
    	}
    if(a[i]>0)
    	{
    	char c=(char)(i+97);
    	m=m+c;
    	a[i]=a[i]-1;	
    	}
    }
   right=s3;
   reverse(s3.begin(),s3.end());
   string r=right+m+s3;
//	cout<<r;
for(int i=0;i<r.length();i++)
{
	for(int j=0;j<s.length();j++)
	{
		if(r[i]==s[j])
	{
		cout<<j<<" ";
	s[j]='0';
	}
	
	}
}

	
}
int pallindromes(string s){
     int a[26]={0};
    string s1;
    int count=0,count1=0;
    for(int i=0;i<s.length();i++)
    {
        int d=(s[i]-97);
        a[d]++;
        
  
    }
    for(int i=0;i<s.length();i++)
    {   if(s.length()%2==0)
        {
            if(a[s[i]-97]%2!=0)
             count1++;
                    }
        else if(s.length()%2!=0)
        {
            if(a[i]%2!=0)
               count++; 
        }
        
    }
    if(s.length()%2==0)
    {
    if(count1!=0)
        return -1;
    else return 1;
    }
    else {
    if(count>1)
        return -1;
    else return 1;
    }
   
   
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	
    string s;
    cin >> s;
   int result = pallindromes(s);
   if(result==-1)
  {
    cout << result << endl;
 }   else
    {
  new1(s);  	
    }
}
	return 0;
}

