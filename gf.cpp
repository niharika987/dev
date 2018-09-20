
#include <bits/stdc++.h>
using namespace std;

bool v[100007]={false};
 vector<int> a[100007];
int count11=0;
int b[100007];
//vector<int> c[100007];
void dfs(int s,int count11)
{  
v[s]=true;
count11++;
    for(int i=0;i<a[s].size();i++)
    { 
        if(v[a[s][i]]==false)
        { v[a[s][i]]=true; 
	//	c.insert(a[s][i],count11);
		b[a[s][i]]=count11;
	//	cout<<b[a[s][i]]<<a[s][i]<<count11<<endl;
        dfs(a[s][i],count11);
        }
	
	}
}
int main()
{
  int n,m;
  cin>>n;
 int x,y;
 m=n-1;
  while(m--){
      cin>>x>>y;
      a[x].push_back(y);
      a[y].push_back(x);
  }int h;
  
  
 for(int i=1;i<=n;i++)
 {
 v[i]=false;
}
dfs(1,count11);
//int max=min_element(c[i].begin(),c.end());
  int q;
  cin>>q;
  int d;
  	cin>>d;
  	 int min=d;
  	 q=q-1;
  while(q--)
  {
  	int f;
  	cin>>f;
  { 
  	if(b[f]<b[min])
  	min=f;
  }
  }
 
  cout<<min;
  return 0;
}

