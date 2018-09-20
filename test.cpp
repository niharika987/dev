#include <string> 
#include <iostream> 
 
using namespace std; 
 
int main() 
{ 
 //use cin to get console input 
 
 //use cout to print console output 
  int a[11],b[11],c[100005]={0},d[100005]={0};
  for(int i=0;i<11;i++)
  {
    cin>>a[i];
    c[a[i]]++;
  }
 
   for(int i=0;i<11;i++)
  {
    cin>>b[i];
    d[b[i]]++;
  }
  int flag=0;
  
  for(int i=0;i<12;i++)
  {
    if(c[i]!=d[i])
      flag=1;
  }
  
  
   for(int i=0;i<12;i++)
  {
   cout<<c[i];
  }
  cout<<endl;
   for(int i=0;i<12;i++)
  {
   cout<<d[i];
  }
  
  if(flag==1)
    cout<<"NO"<<endl;
  else
    cout<<"YES"<<endl;
 
  
 return 0; 
}
