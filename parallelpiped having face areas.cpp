#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	// face areas of parallelpiped area=l*b;
	
	// let a,b,c be 3 edges having a common vertex... such that s1=ab, s2=bc,s3=ca... 
	// a^2=s1s3/s2, b^2=s1s2/s3, c^2=s2s3/s1
	
	
	double a,b,c;
	a=sqrt((s1*s3)/s2);
	b=sqrt((s1*s2)/s3);
	c=sqrt((s2*s3)/s1);
cout<<4*(a+b+c);
}
