#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ int count=0;
		int a[30];
		for(int i=0;i<30;i++)
		{
			cin>>a[i];
	}
	int b[6]={1,1,1,1,1,1};

	
	int i=0,j=0,flag=0;
	while(i<30)
	{ //cout<<a[i]<<b[j];
		if(a[i]==b[j])
		{ //cout<<j; 
		if(j==5)
	{ flag=1;
		break; } 
		i++;
		j++;
		
		
}
else
{ j=0;
//cout<<i;
	i++;
}
	
	
	}
	
		if(flag==1)
		cout<<"#coderlifematters"<<endl;
	else
		cout<<"#allcodersarefun"<<endl;

	}
	return 0;
}
