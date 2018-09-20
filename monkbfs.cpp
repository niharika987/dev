#include<bits/stdc++.h>

using namespace std;

const int mn = 1e5+5;

vector<int> a[mn];
int dist[mn];

void bfs(int s){
	for(int i=0;i<mn;i++)
		dist[i] = 1000000;
	queue<int> q;
	q.push(s); dist[s] = 0;
	while(!q.empty()){
		int u  = q.front();
		q.pop();
	//	cout<<"Ulti values : ";
	/*	for(int j=a[u].size()-1; j>=0; j--){
			cout<<a[u][j]<<" "; 
		}
*/		for(int i=0; i<a[u].size(); i++){
			int v = a[u][i];
			if(dist[v] > dist[u]+1){
				dist[v] = dist[u] + 1;
				q.push(v);
			}
		}
	}
}

int main(){
	int t; cin>>t;
	while(t--){
		int n, m, u, v;
		cin>>n>>m;
		while(m--){
			cin>>u>>v;
			a[u].push_back(v);
			a[v].push_back(u);
		}
		bfs(1);
		cout<<dist[n]<<"\n";
		for(int i=0;i<n;i++)
		a[i].clear();
	}
}
