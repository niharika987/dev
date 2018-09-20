#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
   int x=0;
   while(t!=0)
   { x=x+1;
   if(x>t)
   break;
   t=t-x;
   if(x==3)
   x=0;
   	
   }
   if(t==0)
   cout<<"yes"<<endl;
   else
   cout<<"no"<<endl;
	return 0;
}
