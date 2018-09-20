#include<bits/stdc++.h>
using namespace std;
int MAX=1000007;
int factor[1000007]={0};
void gen()
{    
    factor[1] = 1;
 
    for (int i = 2; i < MAX; i++)
        factor[i] = i;
 
     for (int i = 4; i < MAX; i += 2)
        factor[i] = 2;
 
    for (int i = 3; i * i < MAX; i++) 
    {
         if (factor[i] == i) 
        {
             for (int j = i * 2; j < MAX; j += i) 
            {
                 if (factor[j] == j)
                    factor[j] = i;
            }
        }
    }
}
 
int cal(int n)
{
    if (n == 1)     
        return 1;
 
    int ans = 1;
     
    int rp = factor[n];
     
    int c = 1;
     
     int j = n / factor[n];
     
     while (j != 1) 
    {
        if (factor[j] == rp) 
            c += 1;
         
        
        else
        {
            rp = factor[j];
            ans = ans * (c + 1);
            c = 1;
        }
 
         j = j / factor[j];
    }
 
    ans = ans * (c + 1);
 
    return ans;
}
 
int main()
{
    
    gen();
 
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   cin>>a[i];
   
    for (int i = 0; i < n; i++)     
        {
        	if(cal(a[i])==3)
        	cout<<"YES"<<"\n";
        	else
        	cout<<"NO"<<"\n";
        }
 
    return 0;
}
