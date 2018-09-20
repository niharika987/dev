#include <bits/stdc++.h>
using namespace std;

vector <int> adj[1005];
int main()
{ int x,y,nodes,edges;
cin>>nodes>>edges;
for(int i=0;i<edges;i++)
{
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
int q,a,b;
cin>>q;
while(q--)
{ int flag=0;
    cin>>a>>b;
for(int i=0;i<adj[a].size();i++)
{
    if(adj[a][i]==b)
    {cout<<"YES"<<endl;
    
        flag=1;
        break;
    }
 
}
if(flag==0)
cout<<"NO"<<endl;
    
}
    return 0;
}

