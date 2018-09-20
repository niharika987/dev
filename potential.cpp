#include <iostream>
using namespace std;

int main()
{ 
    int n,q;
cin>>n>>q;
int x[n+1],p[n+1];
for(int i=1;i<=n;i++)
cin>>x[i];
for(int i=1;i<=n;i++)
cin>>p[i];
    while(q--)
    { int xp,yp,v1,v2,v;
        int c;
        cin>>c;
        if(c==1)
        {
            cin>>xp>>v1;
            x[xp]=v1;
        }
        else if(c==2)
        {
        
           cin>>yp>>v2;
            p[yp]=v2;  
        }
            else if(c==3)
            {
                int a,b;
                cin>>a>>b;
                 long long v=(x[a])+min(p[a],a-a);
                for(int i=a+1;i<=b;i++)
                {
            long long g=(x[i])+min(p[i],i-a);
            if(g>v)
            v=g;
                }
                cout<<v<<endl;
                }
        }
    return 0;
}

