#include<bits/stdc++.h>
using namespace std;
int mininserts(string s,int low,int high)
{
	int t[high][high],gap;
	int l,h;
	memset(t,0,sizeof(t));
	for(gap=1;gap<high;gap++)
	{
		for(l=0, h=gap;h<high; ++l, ++h)
		{
			t[l][h] = (s[l]==s[h]) ? t[l+1][h-1] : (min(t[l+1][h],t[l][h-1])+1);
			
            t[l][h] = (s[l]==[h]) ? t[l+1][h-1] : (min(t[l+1][h], t[l][h-1])+1);
		}
	}
	
	return t[0][high-1];
	}
int main()
{
	string s;
	cin>>s;
	cout<<mininserts(s,0,s.length());
	return 0;
}
