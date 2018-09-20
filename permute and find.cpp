
#include <bits/stdc++.h>
using namespace std;
 int res;
int find1(string out,string str,int count)
 { res=count;
 	
 	std::size_t found = str.find(out);
  if (found!=std::string::npos)
  return 1;
  else
  {
if(str.find("chef")!=std::string::npos)
return 1;
else  
  return 0;
}

 }
 
void permute(string s2, string out,int count,string str)
{
     if (s2.size() == 0)
    {
        //cout << out << endl;
   int x= find1(out,str,count);  
   if(x==1)
   count++;
    return;
       // return count;
    }
 
   
    for (int i = 0; i < s2.size(); i++)
    {
        permute(s2.substr(1), out + s2[0],count,str);
 
        
        rotate(s2.begin(), s2.begin() + 1, s2.end());
    }
}
 

int main()
{
   int t;
   cin>>t;
   while(t--)
   { int count=0;
   	string s;
   	cin>>s;
   	string s2="chef";
  	permute(s2,"",count,s);
   cout<<res;
   }
	 return 0;
}
