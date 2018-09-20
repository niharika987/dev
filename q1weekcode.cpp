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
	int v;
	for(int i=0;i<n;i++)
	{ int count=0,count1=0,flag=0;
		int x=value[i];
		while(x!=0)
		{ 
		
			int y=x%10;
		if(y!=4 && y!=7)
	{
		flag=1;
		break;
	}
		if(y==4)
			count++;
			else if(y==7)
			count1++;
		x=x/10;
		}
if(flag==1 && i!=n-1)
continue;


		if(count==count1 && count!=0 && count1!=0)
		{ v=i;
		
		break;
	} v=i;
		}
		if(v!=n-1)
			{ for(int i=0;i<n;i++)
			{
				if(a[i]==value[v])
				{
				cout<<name[i]<<endl;
				break; }
			}
			
    }else
    {
    cout<<"-1"<<endl;
    }return 0;
}

