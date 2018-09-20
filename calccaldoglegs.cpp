#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int c,d,l;
		cin>>c>>d>>l;
	if(l%4==0)
	{
		if(c<=(2*d) && (l>=(4*d) || l<=(c+d)*4  ))
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
	}
	else
	cout<<"no"<<endl;
	
	
	}
	return 0;
}
