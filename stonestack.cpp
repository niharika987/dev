#include <bits/stdc++.h>
using namespace std;
int top=-1;


int main()
{ int stack[10000]; 
int sum=0,count=0;
    int t;
    cin>>t;
    int a[t];
for(int i=0;i<t;i++)
{
    cin>>a[i];
}
int q,k;
cin>>q>>k;
int j=0,c=0;
while(q--)
{ 
    string s;
    cin>>s; 
    if(s=="Harry")
    {//cout<<a[j]<<"yo";
        c=a[j];
        j++;
        
         sum=sum+c;
        stack[++top]=c;
        
       count++;
       //cout<<count<<sum;
    }
    else{
        int r=stack[top];
        sum=sum-r;
        stack[top--];
        count--;
    //cout<<count<<sum;
	}
    if(sum==k)
    {cout<<count;
    break;}
}
    return 0;
}

