#include<iostream>
#include<math.h>
using namespace std;
int lcm(int n,int m)
{
  int max = (n > m) ? n : m;
	do{
		if(max% n==0 && max%m==0)
		{
			return max;
			
		}
		else{
			++max;
		}
	}while(true);
	return 0;
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k;
		cin>>n>>m>>k;
		int x=lcm(n,m);
		int r=k/x;
		cout<<r<<"\n";
	}
	return 0;
}
