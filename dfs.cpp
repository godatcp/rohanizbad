#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//recursively traversing each node
#define maxn 100005
vector<int> adj[maxn];
vector<int> vis(maxn,false);
void dfs(int node){
    vis[node] = true;
    cout << node << endl;
    for(int j : adj[node]){
        if(!vis[j]){
            dfs(j);
        }
    }
}
int main(){
    int N,M; cin >> N >> M;
    for(int i = 0;i < M;i++){
        int a,b; cin >> a >> b; adj[a].push_back(b); adj[b].push_back(a);
    }
    dfs(1);
}
