#include<bits/stdc++.h>
using namespace std;
 
int fun(int arr[] , int n)
{
    int count = 0; 
    for (int i=0; i<n; i++)
    {
        int p = arr[i];
        int sum = arr[i];
        for (int j=i+1; j<n; j++)
        {
            
            if (p==sum)
                count++;
 
            p *= arr[j];
            sum += arr[j];
        }
 
        if (p==sum)
            count++;
    }
    return count;
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
    cout << fun(a, n)<<endl;
}
	return 0;
}

