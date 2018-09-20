#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][26];
    
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<26;j++)
    	a[i][j]=0;
    }
    string s;
    for(int i=0;i<n;i++)
    {
    	cin>>s;
    	for(int j=0;j<s.length();j++)
    	a[i][s[j]-97]++;
    }
    int c=0;
    for(int j=0;j<26;j++)
    { int flag=0;
    	for(int i=0;i<n;i++)
    	{
    if(a[i][j]==0)	
    		{
    		flag=1;
    		break;}
    	}
    	if(flag==0)
    	c++;
    
    }
    
    cout<<c;
    return 0;
}
