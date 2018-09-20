#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{ int x;
cin>>x;
int fact=1;
if(x==0)
{
cout<<"1"<<endl;
continue; }
else{

while(x!=1)
{   fact=fact*x;
	x=x-1;
} cout<<fact<<endl;}  


}
return 0;

}
