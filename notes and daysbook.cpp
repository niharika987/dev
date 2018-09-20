#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[7];
	for(int i=0;i<7;i++)
	cin>>a[i];
	int i=0;
	while(n>0)
	{ n=n-a[i];
//	cout<<a[i]<<endl;
	if(n<=0)
	break;
//	cout<<n;
	i++;
	if(i==7)
	i=0;
		
	}
	cout<<i+1;
	return 0;
}
