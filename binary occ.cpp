#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[]={1,2,2,3,3,3};
	int f=0,l=5;
	int mid;
	int k=2;
	int  f1=0,l1=0;
	while(f<=l)
	{ mid=(f+l)/2;
		if(a[mid]==k && (mid==0 || a[mid-1]<k ) )
		{
			f1=mid;
			break;
		}
		if(a[mid]<k)
		f=mid+1;
		else
		l=mid-1;
		
		
	}
	f=0,l=5;
		while(f<=l)
	{ mid=(f+l)/2;
		if(a[mid]==k && (mid==5 || a[mid+1]>k ) )
		{
			l1=mid;
			break;
		}
		if(a[mid]<k)
		f=mid+1;
		else
		l=mid-1;
		
//	i	
	}
	
	cout<<(l1-f1)+1;
return 0;
}


//bit.ly/2MhKlcz
