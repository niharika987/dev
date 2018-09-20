#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ string n,c;
		getline(cin,n);
		int l=0;
		vector<long long> a(53);
	
		for(int i=0;i<n.length();i++)
		{ 
			if(n[i]==' ')
		{ 
	
long long x=stoi(c);
	a.push_back(x); 
	l++;
		c='\0';
	continue;	
		}c=c+n[i];	
		if(i==n.length()-1)
		{
long long x=stoi(c);
	a.push_back(x); 
	l++;
	}
	

		
		}
		
		sort(a.begin(),a.end());
	cout<<a[l-2]<<endl;		
		
	
	
	}
}
