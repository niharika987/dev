#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[2*n];
	for(int i=0;i<2*n;i++)
	cin>>a[i];
	
	int b[n],c[n];
	for(int i=0;i<n;i++)
	b[i]=a[i];
	for(int i=0;i<n;i++)
	c[i]=a[n+i];
	sort(b,b+n);
	sort(c,c+n);
	if(b[0]<c[0])
	{ int flag=0;
	
		for(int i=1;i<n;i++)
		{
			if(b[i]>c[i])
			 {
			 flag=1;
			break; }
		}
		if(flag==1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
	else if(b[0]>c[0]){
	
		int flag=0;
		for(int i=1;i<n;i++)
		{
			if(b[i]<c[i])
			 {
			 flag=1;
			break; }
		}
		if(flag==1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
		
	}
	
	return 0;
}
