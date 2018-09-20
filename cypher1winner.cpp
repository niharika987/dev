#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	int count=0,count1=0;
	int i=x;
	while(i<=n)
	{
		if(i%y==0)
		continue;
		else
		count++;
		
		i=i+x;
	}
	
	int j=y;
	while(j<=n)
	{
		if(j%x==0)
		continue;
		else
		count1++;
		
		j=j+y;
	}
	if(count>count1)
	cout<<"AYUSH"<<" "<<count-count1;
	else if(count1>count)
	cout<<"SAMEER"<<" "<<count1-count;
	else if(count==count1)
	cout<<"TIE"<<endl;
	return 0;
}
