#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int a[]={-5,-4,2,-1,3,1,-4,-3};
int max_so_far=INT_MIN,max_end=0;
	for(int i=0;i<8;i++)
{
	max_end=max_end+a[i];
	if(max_so_far<max_end)
	max_so_far=max_end;
	
	if(max_end<0)
	max_end=0;
}
cout<<max_so_far;
	return 0;
}
