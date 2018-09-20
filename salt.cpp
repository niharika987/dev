#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int t=k*l/nl;
int t2=c*d;
int t3=p/np;

cout<<min(t,min(t2,t3))/n;
return 0;
}
