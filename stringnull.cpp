#include <bits/stdc++.h>

using namespace std;

void super_reduced_string(string s){
    // Complete this function
  int a[26]={0};
    for(int i=0;i<s.size();i++)
    {
       a[s[i]-97]++;
       
       while(a[s[i]-97]>=2)
       {
       	a[s[i]-97]-=2;
       }
	 
	}
int flag=0;	
for(int i=0;i<25;i++)
{
	if(a[i]==1)
	{ flag=1;
		char d=97+i;
		cout<<d;
	}
}
if(flag==0)
cout<<"Empty String";
}

int main() {
//	char a[n];
    string s;
    cin >> s;
    super_reduced_string(s);
   // cout << result << endl;
    return 0;
}

