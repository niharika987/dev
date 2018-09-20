#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int i=0,c=0,flag=0,res=0;
	while(i<=(n-1))
	{
		if (a[i]==1 && flag==0)
		{
		c=0;
		flag=1;
		}else if(a[i]==1 && flag==1)
		{
		res=max(res,c);
		c=0;
		}
		else
		{
			c++;
		}
		i++;
	}
	if(c==n )
	cout<<c;
	else if(res!=0)
	cout<<res+2;
	else
	cout<<res;
	return 0;
}
