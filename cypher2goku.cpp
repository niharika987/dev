#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g,n;
		cin>>g>>n;
		int a[n+1];
		for(int i=1;i<=n;i++)
		cin>>a[i];
		
		sort(a+1,a+n+1,greater<int>());
		
		
		
		
		cout<<endl;
		
		int flag=0;
		int i=1;
	//	int l=0;
			if(g<a[1])
		{
			flag=1;

		}
		else
		{
		
		while(i<=n)
		{ 
		
	
		if(a[i]>0 && g>=a[i]) 
			{
			 g=g-a[i];
			} else
			 {
			  i++;
			 continue;
		}
			 
			
			for(int j=i+1;j<=n;j++)
			{
				if(a[j]!=0)
				a[j]=a[j]-1;
	//	cout<<a[j];
		}
		
		
	
		if(g>=a[i+1])
		{
			i++;
	
		}	else
			{
			flag=1;
			i=i+1;
			break;}
		}
	}
		if(flag==0)
		cout<<"YES"<<" "<<g<<endl;
		else
		cout<<"NO"<<" "<<i<<endl;
		
	}
	return 0;
}
