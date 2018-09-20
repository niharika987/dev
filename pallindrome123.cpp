#include <bits/stdc++.h>

using namespace std;

void new1(string s)
{
	int a[26]={0};
    for(int i=0;i<s.length();i++)
    {
        int d=(s[i]-97);
        a[d]++;   
    }
   
    vector<int> a1[26];
    for(int i=0;i<s.length();i++)
    {
         	a1[s[i]-97].push_back(i+1);
    }
         
    string left,mid,right;
         
    for(int i=0;i<26;i++)
    {
     if(a[i]>1)
       	{
         	
         	int l=a1[i].back();
         	         	
         
           cout<<l;
           a1[i].pop_back();
            a[i]=a[i]-1;
        } 
     
     if(a[i]>0)
     {
   	int l=a1[i].back();
         	         	
         a1[i].pop_back();
           cout<<l;
         a[i]--;
     }	 
		 }
		 int t=left.size();
		 int u=mid.size();
		 if(t>1 && u==0)
		 left.resize(t-1);
		 else if(u>1)
		 mid.resize(u-1);
		 
		 string res=left+mid+right;
	 cout<<res<<endl;
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

