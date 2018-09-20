#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=0;
	n=n+1;
	while(flag==0)
	{ bool visited[10]={false};
		//n++;
		int x=n;
		while(x)
		{
			if(visited[x%10])
		{ 
		flag=0;
		break;
		}
			visited[x%10]=true;
			
			x=x/10;
		
		}
		if(x!=0)
		n=n+1;
		else if(x==0)
		break;
	}
	cout<<n;
	

	
	
	
	return 0;
}
