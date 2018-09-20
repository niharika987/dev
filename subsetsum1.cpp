#include<stdio.h>
#include<iostream>
using namespace std;
int V[10001],C[10001],F[10001],P[10001], N;
bool isSubsetSum(int v,int c,int f,int p, int n )
{
   // Base Cases
   if (v == 0 &&c==0 && f==0 && p==0)
     return true;
   if (n == N && (v != 0 ||c!=0 || f!=0 || p!=0))
     return false;
   // If last element is greater than v, then ignore it
   if (V[n] > v ||C[n]>c ||F[n]>f || P[n]>p)
     return isSubsetSum(v,c,f,p, n+1);
   /* else, check if v can be obtained by any of the following
      (a) including the last element
      (b) excluding the last element   */
   return isSubsetSum( v,c,f,p,n+1) || isSubsetSum(v-V[n],c-C[n],f-F[n],p-P[n], n+1);
}
// Driver program to test above function
int main()
{
    
    string s;
    
  
  int v ,c,f,p;
  cin>>v>>c>>f>>p;
  
        cin>>N;
for(int i=0;i<N;i++)
{
    cin>>V[i]>>C[i]>>F[i]>>P[i];
}
  if (isSubsetSum(v,c,f,p,0) == true)
     {
         s="Yes";
     }
  else
     {
         s="no";
     }
    
         cout<<s<<endl;
    
  return 0;
}
