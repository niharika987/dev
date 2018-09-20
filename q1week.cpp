#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
        string name[n];
        int value[n];
        for(int i=0;i<n;i++)
        {
            cin >> name[i] >> value[i];
    
	}
	int a[n];
	for(int i=0;i<n;i++)
	{
		a[i]=value[i];
	}
	sort(value,value+n);
	int b,flag=0;
	int count=0,count1=0;
	for(int i=0;i<n;i++)
	{ 
		int x=value[i];
		while(x!=0)
		{
			int y=x%10;
			if(y==4)
			count++;
			else if(y==7)
			count1++;
		x=x/10;
		}
		if(count==count1 && count!=0 && count1!=0)
		{ flag=1;
		 b=i;
		
		break;
	} 
		}
		if(flag==1)
			{ for(int i=0;i<n;i++)
			{
				if(a[i]==value[b])
				{
				cout<<name[i]<<endl;
				break; }
			}
			
    } else if(count==0 && count1==0)
    {
    	cout<<"-1"<<endl;
    }
return 0;
}

