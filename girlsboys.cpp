#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	string s;
 int flag=0;
while(n>0 && m>0)
{ 


		if(flag==0)
		{
		s=s+'B';
		flag=1;
	//	cout<<s<<endl;
		n--;
		}else if(flag==1)
		{
			s=s+'G';
			flag=0;
			//cout<<s<<endl;
			m--;
		}
	
	
}
	if(n==0)
	{
		for(int i=0;i<m;i++)
		s=s+'G';
		//break;
	}
	else if(m==0)
	{
			for(int i=0;i<n;i++)
		s=s+'B';
		//break;
	}
cout<<s;
	return 0;
}
