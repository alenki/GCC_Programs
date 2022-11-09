#include <bits/stdc++.h>
using namespace std;
int s,n;
vector<int> znach;
vector<vector<int>> adj;
vector <bool> vizited;
void dfs(int u,int s){
	if (vizited[u]) return;
	vizited[u]=true;
	if(znach[u]==s){
		for(int i = 0;i<adj[u].size();i++){
			if(!(vizited[adj[u][i]])){
			znach[i]=s-1-i;}
		}
	}
	else{
		for(int i = 0;i<adj[u].size();i++){
			if(!(vizited[adj[u][i]])){
			znach[i]=s-2-i;}
	}
	for(auto x: adj[u]){
		dfs(x,s);
	}
	
}}
int main() {
	int u =0;
	cin>>n>>s;
	vizited.resize(n);
	znach.assign(n,0);
	adj.resize(n);
	for(int i=0;i<n-1;i++){
		int u,v;
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	znach[u]=s;
	dfs(u,s);
	int a=1;
	for(int i = 0;i<n;i++){
		if(znach[i]>0){
		
		a*=znach[i];
	}
	}
	cout<<a;
	return 0;
}
