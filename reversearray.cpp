#include <string> 
#include <iostream> 
 #include<algorithm>
using namespace std; 
 
int main() 
{ 
 //use cin to get console input 
 
 //use cout to print console output 
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  int i=0, e=n-1;
  int temp;
  
  while(i<e)
  {
    temp=a[i];
    a[i]=a[e];
  a[e]=temp;
    i++;
    e--;
  }
  

//reverse(a,a+n);  
  
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
 
 return 0; 
}
