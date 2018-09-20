#include<iostream>
using namespace std;
int main()
{
	int a[6]={2,4,9,9,9,12};
	cout<<"hello";
	int mid,l1,r1,l=0,h=5;
	while(l<=h)
	{
		mid=(l+h)/2;
		if(a[mid]==9)
		{
			int x;
			while(a[x]==9)
			{
				x--;
			} l1=x+1;
			
			while(a[mid]==9)
			{
				mid++;
			}
			r1=mid-1;
		break;	
		}
		
		if(a[mid]<9)
		l=mid+1;
		else
		h=mid-1;
	}
	
	cout<<"hello"<<l1<<r1;
	return 0;
	
}
