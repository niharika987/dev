
#include <bits/stdc++.h>
using namespace std;

bool v[100007]={false};
vector<int> a[100007];

int b[100007];

void dfs(int s,int count11)
{  
v[s]=true;
count11++;
    for(int i=0;i<a[s].size();i++)
    { if(a[s][i]==s)
    count11++;
        if(v[a[s][i]]==false)
        { v[a[s][i]]=true; 

		b[s]=count11;
	
        dfs(a[s][i],count11);
        }
	
	}
	
}
int main()
{ long long count11=0;
  long n,m;
  cin>>n>>m;
 int x,y;

  while(m--){
      cin>>x>>y;
      a[x].push_back(y);
      a[y].push_back(x);
  }
  
  
 for(int i=1;i<=n;i++)
 {
 v[i]=false;
}
for(int i=1;i<=n;i++)
dfs(i,count11);
//int max=min_element(c[i].begin(),c.end());
  long long min=b[0];
  for(int i=1;i<=n;i++)
  {
  	if(b[i]>min)
  	min=b[i];
  }
 cout<<min;
  
  return 0;
}

