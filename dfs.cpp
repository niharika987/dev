
#include <bits/stdc++.h>
using namespace std;

bool v[100007]={false};
 vector<int> a[100007];
int count11=1;
void dfs(int s)
{  
v[s]=true;

    for(int i=0;i<a[s].size();i++)
    {
        if(v[a[s][i]]==false)
        { v[a[s][i]]=true; 
		count11++;
        dfs(a[s][i]);
        }
	
	}
}
int main()
{
  int n,m;
  cin>>n>>m;
 int x,y;
  while(m--){
      cin>>x>>y;
      a[x].push_back(y);
      a[y].push_back(x);
  }int h;
  cin>>h;
  
 for(int i=1;i<=n;i++)
 {
 v[i]=false;
}
dfs(h);
cout<<n-count11;
    return 0;
}

