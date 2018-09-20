#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{int i=0,s=0;
	int c[10];
	int a,b;
		cin>>a>>b;
	while(1)
	{ 
		
		
		int x,y;
		x=a%10;
		y=b%10;
		 c[i++]=(x+y)%10;
		a=a/10;
		b=b/10;
		if(a==0 && b==0)
		break;
	}
int r=0;
for(int j=i-1;j>=0;j--)
r=r*10+c[j];
cout<<r<<endl;
}
}
