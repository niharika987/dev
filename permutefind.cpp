#include <bits/stdc++.h>
using namespace std;
 

int permute(string str,string s1)
{
    string s=str;
    sort(s.begin(), s.end());
     int count = 0;

     do {
    size_t nPos = s1.find(s, 0); 
  while(nPos != string::npos)
    {
        count++;
        nPos=s1.find(s,nPos+1);
    }

    } while (next_permutation(s.begin(), s.end()));
return count;
}
 int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
string s1;
cin>>s1;	
    string str = "chef";
    int count=0;
    int count1=permute(str,s1);
    
	if(count1!=0)
	cout<<"lovely"<<" "<<count1<<endl;
	else
	cout<<"normal"<<endl;

}
	return 0;
}
