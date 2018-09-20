#include<bits/stdc++.h>
using namespace std;

vector<int> a[100007];
int a22[100007]={0};
int d=0;
void count(vector<int>& path,int a1,int b1)
{
    int size = path.size();
    for (int i = 0; i < size; i++)
	{ 
	// cout << path[i] << " ";    
	//	if(path[i]==a1 || path[i]==b1)
	//	{
			
		//	p.push_back(make_pair(path[i],1 ) );
//}

	a22[path[i]]++;

	}
      //  cout << path[i] << " ";    
    //cout << endl;
}

int isVisited(int x, vector<int>& path)
{
    int size = path.size();
    for (int i = 0; i < size; i++) 
        if (path[i] == x) 
            return 0; 
    return 1;
}

void bfs(int a1,int b1)
{
	queue<vector<int> > q;
	vector<int> pth;
	pth.push_back(a1);
	q.push(pth);
	while(!q.empty())
	{
		pth=q.front();
		q.pop();
		int last=pth[pth.size()-1];
		
		if(last==b1)
		count(pth,a1,b1);
		
		for (int i = 0; i < a[last].size(); i++) {
            if (isVisited(a[last][i], pth)) {
                vector<int> nwpath(pth);
                nwpath.push_back(a[last][i]);
                q.push(nwpath);
            }
        } 
		
		
		
	}
	
}


int main()
{
	
	int n,m;
	cin>>n>>m;
	
	n--;
	while(n--)
	{
		int u,v;
		cin>>u>>v;
		a[u].push_back(v);
		a[v].push_back(u);
	}
	while(m--)
	{
		int a1,b1;
		cin>>a1>>b1;
		bfs(a1,b1);
	}
	 int m1=*max_element(a22,a22+100007);
	cout<<m1; 
	return 0;
}
