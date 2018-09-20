#include<bits/stdc++.h>
using namespace std;
int binary(int low,int high,int key,int a[])
{
    while(low<=high)
    { int mid=(low+high)/2;
        if(key<a[mid]){
        
        high=mid-1; }
        else if(key>a[mid])
        { 
        low=mid+1;
        }else
        {
        return mid; }
    } return -1;
}
int main()
{ int t;
cin>>t;
while(t--)
{
    int n,k,p,j=0;
    cin>>n>>k>>p;
   vector<int> a(n);
    
	 for(int i=0;i<n;i++)
        {
      a[i]=i+1;
        
		}
        
        sort(a.begin(),a.end());
        while(k--)
        {
        	int c;
        	cin>>c;
       a.erase(std::find(a.begin(),a.end(),c));
		}
	if(p<a.size())
	cout<<a[p-1]<<endl;
	else
	cout<<"-1"<<endl;
}
    return 0;
    
}
