#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long n,p;
cin>>n>>p;
vector<int> a(n);
for(int i=0;i<n;i++)
{
	cin>>a[i];
}

sort(a.begin(),a.end());
int i=0,k=0;
while(i<n)
{
	
	if(a[i]==a[i-1] && i!=0)
{
	i++;
	
}
else if(a[i]==k)
	{
	i++;
	k++;
}
else
{
	if(p==0)
     {
    	 break;}	
	 else
	 {
	 	p--;
	 	k++;
	 }
}

}
cout<<k+p<<endl;

}
return 0;
}
