#include <bits/stdc++.h>
 
using namespace std;
int z=-1;
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
       
   // string left,mid,right;
        
    for(int i=0;i<26;i++)
    {
    	for(int j=0;j<a1[i].size()/2;j++)
    	{
    		cout<<a1[i][j]<<" ";
    	
	//	cout<<a1[i].size()/2;
		}
    }
    
  if(z!=-1)
    {    	
 cout<<a1[z][a1[z].size()/2]<<" ";  
}
 
 
    for(int i=25;i>=0;i--)
    {
    	
    	for(int j=a1[i].size()/2;j<a1[i].size();j++)
			{
				if(i==z && j==a1[z].size()/2)
			{continue; }
			else{
			    	cout<<a1[i][j]<<" ";
			}
			}
		
		
    }
    cout<<endl;
    
    
}
 
int pallindromes(string s){
	z=-1;
     int a[26]={0};
    int count=0,count1=0;
    for(int i=0;i<s.length();i++)
    {
        int d=(s[i]-97);
        a[d]++;
        
  
    }
    for(int i=0;i<26;i++)
    {   if(s.length()%2==0)
        {
            if(a[i]%2!=0)
             count1++;
                    
		}         
        else if(s.length()%2!=0)
        {
            if(a[i]%2!=0)
	      	{ 
			  z=i;
		      count++;
		  	}
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
 
