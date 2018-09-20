#include<iostream>
using namespace std;
int merge(int a[],int left,int mid,int right)
{ int in=0;
	int n=mid-left+1,n2=right-mid;
	int t1[n],t2[n2];
	
	for(int i=0;i<n;i++)
	t1[i]=a[left+i];
	for(int i=0;i<n2;i++)
	t2[i]=a[mid+1+i];
	
	int j=0,i=0,k=left;
	while(i<n && j<n2)
	{
		if(t1[i]<=t2[j])
	{
		a[k]=t1[i];
		i++; }
		else
		{ cout<<t1[i]<<t2[j]<<endl;
			a[k]=t2[j];
			j++;
			in+=(mid-i)+1;
		}
	k++;
	}
	while(i<n)
	{
		a[k]=t1[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=t2[j];
		j++;
		k++;
	}
	
	return in;
}
int mergesort(int a[],int l,int r)
{ int in=0;
	if(l<r)
	{
	int m=(l+r)/2;
	
in=	mergesort(a,l,m);
in+=	mergesort(a,m+1,r);
in+=	merge(a,l,m,r); 
	}
return in;
}
int main()
{
	int a[5]={1,20,6,4,5};
	cout<<mergesort(a,0,5)<<endl;
	for(int i=0;i<5;i++)
	cout<<a[i];
	return 0;
}
