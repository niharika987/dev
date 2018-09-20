#include <iostream>
using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    while(n--)
{ int x,y;
    cin>>x>>y;
    }while(q--)
    { int count=0;
        int sx,sy,fx,fy;
        cin>>sx>>sy>>fx>>fy;
        int x1=fx-sx;
        int y1=fy-sy;
        if(x1==0 && y1==0)
        {
        cout<<count;
        break;
       }else{
       while(sx!=fx && sy!=fy)
       {
           if(x1<0)
           {sx--;
           count++;
           }else
           {sy++;
           count++;}
           if(x1>0)
        {   sx++;
           count++;
       }
       else
       {
         sy++;
         count++;
       }
       
               
           }
   }
        cout<<count<<endl;
               
    }
    
    
    return 0;
}

