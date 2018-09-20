#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100005],b[100005];
	for(int i=0;i<n;i++)
{
	cin>>a[i];
b[a[i]]=i;

}
	int q;
	cin>>q;
long long	 int count=0,count1=0;
while(q--)
{
	int x;
	cin>>x;

//	cout<<count<<endl;
	count=count+b[x]+1;
	count1=count1+(n-b[x]);
	
}
cout<<count<<" "<<count1;

	return 0;
}
