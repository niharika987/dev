#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{ long long int count=0;
	long long int n;
		cin>>n;
		for(int i=2;i<=n;i++)
		{
			int x=n/i;
		int d=i;
 	long long int k=0;
 		while(x>0)
 		{
 			x=x/2;
 			k++;
 		}
    long long int j = 0;
    	while (d > 0) {
 
         //bn[i] = n % 2;
        	d= d / 2;
        	j++;
    				}
    				
    	if(k>j)
		continue;
		else
		count++;
	//	cout<<j<<k<<endl;
		}
		cout<<count<<"\n";
		
		
	}
	return 0;
}
