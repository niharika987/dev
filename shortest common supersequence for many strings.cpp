int scs[20][20];
string scss(string x,string y,int m,int n)
{ 
    if(m==0)
    return y.substr(0,n);
    if(n==0)
    return x.substr(0,m);
   
     if(x[m-1]==y[n-1])
     return scss(x,y,m-1,n-1)+x[m-1];
        
        else{
            if(scs[m-1][n]<scs[m][n-1])
            return scss(x,y,m-1,n)+x[m-1];
           else
            return scss(x,y,m,n-1)+y[n-1];
        
        }
        
}

void scs1(string x,string y,int m,int n)
{ 
    
    int scs1[m+1][n+1];
    
    for(int i=0;i<=m;i++)
    scs[i][0]=i;
    
    for(int j=0;j<=n;j++)
    scs[0][j]=j;
    
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(x[i-1]==y[j-1])
            {scs[i][j]=scs[i-1][j-1]+1;

            }else
            {scs[i][j]=min(scs[i-1][j]+1, scs[i][j-1]+1);
          
            }
                
            }
    }
   // return scs[n][m];
}

int Solution::solve(vector<string> &A) {
    if(A.size()==1)
    return A[0].length();
    else
    {
    int m=A[0].length();
    int n=A[1].length();
    scs1(A[0],A[1],m,n);
string s2=scss(A[0],A[1],m,n);
cout<<s2<<s2.length()<<endl;
for(int i=2;i<A.size();i++)
{ m=A[i].length();
    scs1(A[i],s2,m,s2.length());
    s2=scss(A[i],s2,A[i].length(),s2.length());
   cout<<s2<<s2.length()<<endl; 
}
return s2.length();
    }
}

