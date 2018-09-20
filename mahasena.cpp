#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
int a[t];
int count=0,count1=0;
for(int i=0;i<t;i++)
{
cin>>a[i];
if(a[i]%2==0)
count++;
else
count1++;

}
if(count>count1)
cout<<"READY FOR BATTLE"<<endl;
else
cout<<"NOT READY"<<endl;
return 0;
}
