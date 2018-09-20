#include <bits/stdc++.h>
using namespace std;

int minVal(int x, int y) { return (x < y)? y: x; }
 
// A utility function to get the middle index from corner indexes.
int getMid(int s, int e) {  return s + (e -s)/2;  }
int RMQUtil(int *st, int ss, int se, int qs,int qe, int index)
{
    // If segment of this node is a part of given range, then return
    //  the min of the segment
    if (qs <= ss && qe >= se)
        return st[index];
 
    // If segment of this node is outside the given range
    if (se < qs || ss > qe)
        return INT_MAX;
 
    // If a part of this segment overlaps with the given range
  int mid = getMid(ss, se);
    return minVal(RMQUtil(st, ss, mid, qs, qe, 2*index+1),
                  RMQUtil(st, mid+1, se, qs, qe, 2*index+2));
}
 
int RMQ(int *st, int n, int qs, int qe)
{
    
 
    return RMQUtil(st, 0, n-1, qs, qe, 0);
}
 
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
    // If there is one element in array, store it in current node of
    // segment tree and return
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    // If there are more than one elements, then recur for left and
    // right subtrees and store the minimum of two values in this node
   int mid = getMid(ss, se);
    st[si] =  minVal(constructSTUtil(arr, ss, mid, st, si*2+1),
                     constructSTUtil(arr, mid+1, se, st, si*2+2));
    return st[si];
}
 

int *constructST(int arr[], int n)
{
    // Allocate memory for segment tree
 
    //Height of segment tree
int x = (int)(ceil(log2(n))); 
 
    // Maximum size of segment tree
  int max_size = 2*(int)pow(2, x) - 1; 
 
   int *st = new int[max_size]; 
 
    // Fill the allocated memory st
    constructSTUtil(arr, 0, n-1, st, 0);
 
    // Return the constructed segment tree
    return st;
}
 
 
 
int main()
{ 
    int n,q;
cin>>n>>q;
int x[n],p[n];
for(int i=0;i<n;i++)
cin>>x[i];
for(int i=0;i<n;i++)
cin>>p[i];
    while(q--)
    { int xp,yp,v1,v2;
        int c;
        cin>>c;
        if(c==1)
        {
            cin>>xp>>v1;
            x[xp-1]=v1;
            //for(int i=0;i<n;i++)
		//	cout<<x[i];
        }
        else if(c==2)
        {
        
           cin>>yp>>v2;
            p[yp-1]=v2; 
		//	for(int i=0;i<n;i++)
		//	cout<<p[i]; 
        }
            else if(c==3)
            {
                int a,b;
                cin>>a>>b;
                a=a-1;
                b=b-1;
              int arr[n];
               for(int i=0;i<n;i++)
         { //cout<<"xi->"<<(x[i])<<"min->"<<min(p[i],i-a)<<endl;;
              arr[i]=(x[i])+min(p[i],i-a); 
		    // cout<<arr[i];
        }        int n1 = sizeof(arr)/sizeof(arr[0]);
 
    
    int *st = constructST(arr, n1);
 
 int qs = a; 
 int qe = b;  
 
   cout<<RMQ(st, n1, qs, qe)<<endl;
                }
              
                }
        
    return 0;
}

