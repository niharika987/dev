#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{ int n1;
	cin>>n1;
vector<	int> a(n1);
	for(int i=0;i<n1;i++)
	{
		cin>>a[i];
	
	}
	int sum=0,count=0;
	
	while(a.size()!=1)
	{ 
sort(a.begin(),a.end());
		int x=*max_element(a.begin(),a.begin()+2);
		int y=*min_element(a.begin(),a.begin()+2);
	//	cout<<y<<"x"<<x;
		sum=sum+y;
a.erase(std::remove(a.begin(), a.end(), x), a.end());
}	cout<<sum<<endl;

		
	}
	return 0;
}
