#include<bits/stdc++.h>
// in case of 8,16,20
//min is 8 and gcd is 4 so finding min is not feasible

using namespace std;
int gcd(int A, int B) {
    if(B==0)
        return A;
    else
        return gcd(B, A % B);
}
int main()
{
int t;
cin>>t;
while(t--)
{
int a,flag=1;
cin>>a;
int b[a];
for(int i=0;i<a;i++)
cin>>b[i];
int x=b[0];
for(int i=0;i<a;i++)
x=gcd(x,b[i]);

for(int i=0;i<a;i++)
{
	if(b[i]%x!=0)
	{ 
	flag=0;
	break;}
}
if(flag==0)
{
for(int i=0;i<a;i++)
{
cout<<b[i]<<" ";
}
cout<<endl;
}
else{
	for(int i=0;i<a;i++)
	{
	cout<<b[i]/x<<" ";

} cout<<endl;
}

}
return 0;
}
