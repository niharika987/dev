#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> p;
bool v[10007];
vector<p> a[10007];
int prim(int x)
{ priority_queue< p, vector<p> , greater<p> > q;
int m=0;
p p1; 
q.push(make_pair(0,x));
while(!q.empty())
{ int y;
    p1=q.top();
    q.pop();
    x=p1.second;
    if(v[x]==true)
     continue;
    m=m+p1.first;
    v[x]=true;
    for(int i=0;i<a[x].size();i++)
    {
        y=a[x][i].second;
        if(v[y]==false)
        q.push(a[x][i]);
    }
} 

return m;
    
}
int main()
{
    int n,m;
    cin>>n>>m;
    while(m--)
    {
        int x,y,w;
        cin>>x>>y>>w;
        a[x].push_back(make_pair(w,y));
        a[y].push_back(make_pair(w,x));
        
    } 
    int min=prim(1);
    cout<<min;
    return 0;
}

