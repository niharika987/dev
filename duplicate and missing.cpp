#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],t[n+1];
int a1,b;

	for(int i=0;i<n;i++)
{
	cin>>a[i];
	t[i]=0;
}
t[n]=0;

for(int i=0;i<n;i++)
{
	
	if(t[a[i]]==0)
	t[a[i]]++;
	if(t[a[i]]==1)
	a1=a[i];
}

for(int i=1;i<=n;i++)
{
	if(t[i]==0)
	b=i;
}

cout<<a1<<" "<<b;

return 0;

}
	
