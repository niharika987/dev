vector<int> Solution::plusOne(vector<int> &a) {
    int n=a.size();
    
    int b[n+1];
	b[0]=0;
	for(int i=0;i<n;i++)
	b[i+1]=a[i];
	
	int j=n-1,k=n;
	int c=0;
		if((a[j]+1)<=9)
		{
		 b[k]=a[j]+1;
		
	}
	else{
		c=1;
	    b[k]=0;
	    j--;
	    k--;
	while((a[j]+c)>9 && j>=0)
	{ 
	b[k]=0;
	j--;
	k--;
	}
	if(k==0)
	b[k]=1;
	else
	b[k]=a[j]+c;
	
	}
	
	vector<int>c1;
		if(b[0]==0)
  {  int i=1;
  	 while(b[i]==0)
  	        {
  	       i++;       
  	        }
  	        for(int j=i;j<=n;j++)
  	    c1.push_back(b[j]);
  
  }
  else{
  	for(int i=0;i<=n;i++)
  	c1.push_back(b[i]);
  }
    
   return c1; 
    
    
    
}

