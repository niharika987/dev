#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int c=0;
	while(n--)
	{
		int x1,y1,x2,y2,x3,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
	long int d1=pow( (x1-x2),2)+pow((y1-y2),2) ;
	long int d2=pow( (x2-x3),2)+pow((y2-y3),2) ;	
	long int d3=pow( (x3-x1),2)+pow((y3-y1),2);

	int x=0;
	
	/*if(d1>d2 && d1>d2)
	{
	
	long int x=d1;
	if(x==ceil(sqrt(pow(d2,2)+pow(d3,2)) ) )
	c++;
	
	}
	else if(d2>d1 && d2>d3)
	{
	long int x=d2;
	if(x==ceil(sqrt(pow(d1,2)+pow(d3,2))) )
	c++;

	}	
	else if(d3>d1 && d3>d2)
	{
	long int x=d3;
	if(x==ceil(sqrt(pow(d1,2)+pow(d2,2))) )
	c++;
	}*/
	
	if(d1==d2+d3 || d2==d1+d3 || d3==d2+d1)
	c++;
	
	
	}
	
	cout<<c<<endl;
	
	return 0;
}
