#include<iostream>
using namespace std;

long mergesort(int a[],int l,int m,int r)
{ 	long  inv=0;
	int n=m-l+1;
  	int n2=r-m;
	int t1[n],t2[n2];
	for(int i=0;i<n;i++)
	t1[i]=a[l+i];
	for(int i=0;i<n2;i++)
	t2[i]=a[m+1+i];
	
	int i=0;
	int j=0;
	int k=l;
	while(i<n && j<n2)
	{
		if(t1[i]<=t2[j])
		{
		a[k]=t1[i];
		i++;}
		else{
			//	cout<<t1[i]<<t2[j]<<endl;
			a[k]=t2[j];
			j++;
			inv+=m-i+1;
			//cout<<inv<<endl;
	
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
//	cout<<"uo";
	return inv;
}

long merge(int a[],int l,int r)
{ int mid;
long inv=0;
	if(l<r)
	{ mid=(l+r)/2;
		inv=merge(a,l,mid);
			//cout<<"yo"<<inv<<endl;
		inv+=merge(a,mid+1,r);
		//cout<<"yo"<<inv<<endl;
		inv+=mergesort(a,l,mid,r);
	//	cout<<inv<<endl;
	}
	return inv;
}
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
       cout<< merge(a,0,n)<<endl;
    }
	return 0;
 }
