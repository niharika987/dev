#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int count=0;
int n;
cin>>n;
char a[n];
int b[26]={0};
for(int i=0;i<n;i++)
{
cin>>a[i];
b[a[i]-65]++;
}
if(b[8]>=1)
cout<<"INDIAN"<<endl;
else if(b[24]>=1)
cout<<"NOT INDIAN"<<endl;
else if(b[13]==n)
cout<<"NOT SURE"<<endl;
}
return 0;
}
