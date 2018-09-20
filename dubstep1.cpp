#include<iostream>
using namespace std;
int main()
{
	string s,s1;
	cin>>s;
	
		int i=0,x=0;
	while(i<s.length())
	{

size_t nPos=s.find("WUB",i);
if(nPos==x)
{
i=i+3;
 x=nPos+3; }
 else
 {
 	for(int j=i;j<nPos;j++)
 	s1=s1+s[j];
 	
 	i++;
 }	
s1=s1+" ";
	
	}
	return 0;

}

