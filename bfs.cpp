#include <bits/stdc++.h>
using namespace std;
int n;
int x1;
vector<int> a[100007];
void bfs(int s)
{ 
	bool v[100007]={false};
	int count=0; 
	int level[100007];
    queue<int> q;
    level[s]=1;
    q.push(s);
    v[s] = 1;
    while(!q.empty())
    {
        int p=q.front();
  //    cout<<p<<"deq";
        q.pop();
        for(int i=0;i<a[p].size();i++)
        {
	        if(v[a[p][i]]==false)
	        { 
				// cout<<"level of"<<a[p][i]<<"="<<level[p]+1;
		        level[a[p][i]]=level[p]+1;
				q.push(a[p][i]);
		           v[a[p][i]]=true;
	        }
	        
        }
        
    } 
	for(int i=1;i<=n;i++)
    { //cout<<"leve;"<<i<<"="<<level[i];
if(level[i]==x1)
count++;
} cout<<count;
    
    
}
int main()
{
    
    cin>>n;

    int x,y;
    for(int i=1;i<=n-1;i++)
	{
	    cin>>x>>y;
	    a[x].push_back(y);
	    a[y].push_back(x);
	    
	}
	cin>>x1;
	bfs(1);
    return 0;
}

