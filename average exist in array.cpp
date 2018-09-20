
#include<bits/stdc++.h>

using namespace std;

 int binary(int b[],int low,int high,int key)
{ 
    while(low<=high)
    { int mid=(low+high)/2;
        if(key<b[mid]){
        
        high=mid-1; }
        else if(key>b[mid])
        { 
        low=mid+1;
        }else
        {
        return mid; }
    } return -1;
}

int hsh(int a[],int n)
{ 	int count=0;   
//	int b[n];
//	for(int i=0;i<n;i++)
//	b[i]=a[i]
	

	
	int i=0,j=i+1;
	while(j<n)
	{
	int x=a[i]+a[j];
	if(x%2==0)
	{
	if(binary(a,0,n-1,x/2)!=-1);
			count++;
	}
		
		if(j==n-1 && i<n)
			{
				i++;
				j=i+1;
			}
			else if(i==n-1 && j==n-1)
			break;
			else{
				j++;
			}
	}
	return count;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
	int x=hsh(a,n);
	cout<<x<<"\n";
	}
	return 0;
}
