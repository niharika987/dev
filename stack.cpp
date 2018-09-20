#include <iostream>
using namespace std;

int main()
{
   
    int t;
     cin>>t;
   
    	
    
      while(t--)
    { 
    	int top=-1;
    	

    	long stck[100000],n;
    	long long x;
       
         cin>>n;
        
    	while(n--)
    { 
    	
    	cin>>x;
    
    stck[++top]=x;
    
    
    }
 int a[top];        
    for(int i=0;i<=top;i++)
    {
    	
    }
     
		for(int i=top;i>=0;i--)
	{  int count1=1;
	for(int j=i-1;j>=0;j--)
	{
	
		if(stck[j]<=stck[i])
		{
		count1=count1+1;
	    }
	    else{ //cout<<stck[i];
	    	break;
	    }
}
 a[i]=count1;
	}
	for(int i=0;i<=top;i++)
	{
		cout<<a[i]<<" ";
	}
	

         } 	

}

