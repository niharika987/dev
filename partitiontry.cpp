#include<bits/stdc++.h>
using namespace std;

bool findPartiion (int arr[], int n)
{
    int sum = 0; 
    for (int i = 0; i < n; i++)
      sum += arr[i];
     
    if (sum%2 != 0)  
       return false;
   
    bool part[sum/2+1][n+1];
     
    
    for (int i = 0; i <= n; i++)
      part[0][i] = true;
       
    for (int i = 1; i <= sum/2; i++)
      part[i][0] = false;     
      
     for (int i = 1; i <= sum/2; i++)  
     {
       for (int j = 1; j <= n; j++)  
       {
         part[i][j] = part[i][j-1];
         if (i >= arr[j-1])
           part[i][j] = part[i][j] || part[i - arr[j-1]][j-1];
       }        
     }    
     
     
      return part[sum/2][n];
}     

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,n;
		cin>>x>>n;
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			
			a[i]=i+1;
	if(i==x-1)
	continue;
	else
	sum=sum+a[i];
	
	}
	
	int c[n-1];
	int k=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		continue;
		else
		{
			c[k]=a[i];
			k++;
		}
	}
	
	for(int i=0;i<k;i++)
	cout<<c[i];
	
	
	 if (findPartiion(c, n-1) == true)
    { int b[n];
    		int y=sum/2;
	if(c[n-2]==y)
	{
	b[n-1]=1;
for(int i=0;i<n-1;i++)
{
	if(i==x-1)
{
	b[i]=2;
	continue;
}

b[i]=0;

}
}

else
{
int y=sum/2;
int j=c[n-2]-1;
	b[j]=0;
	int k=y-c[n-2]-1;
	b[k]=0;
	b[x-1]=2;

	for(int i=0;i<n;i++)
	{
		if(i==j || i==k || i==x-1)
		continue;
		else
		b[i]=1;
	}
	
}
	
	
	
	

	for(int i=0;i<n;i++)
	cout<<b[i];	
	

cout<<endl;
		
		
    }
	
	else
     cout<<"impossible"<<endl;
 
	


	
}
return 0;
}
