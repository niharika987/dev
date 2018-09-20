#include <bits/stdc++.h>
using namespace std;

vector< pair<int,int> > adj[1005];
int main()
{
int n,m,k;
   cin>>n>>m>>k;
int a[1005];
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
   } int x,y;
   for(int i=1;i<=m;i++)
   {
       cin>>x>>y;
       adj[x].push_back(make_pair(a[y],y));
       adj[y].push_back(make_pair(a[x],x));
   
   }
   for(int i=1;i<=n;i++)
   {
       sort(adj[i].begin(),adj[i].end());
   }
  
   for(int i=1;i<=n;i++)
   { //cout<<adj[i].size();
   //below is for descending
       if(adj[i].size()>=k)
       cout<<adj[i][adj[i].size()-k].second<<endl;
       else
       cout<<-1<<endl;
   }
    return 0;
}

