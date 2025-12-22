#include<iostream>
#include<vector>
#include<queue>
using namespace std;


void bfs(vector<vector<int>>&adj, int source, vector<bool>&vis){
    int V=adj.size();
    queue<int> q;
    q.push(source);
    vis[source]=true;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int nbr:adj[node]){
            if(!vis[nbr]){
                q.push(nbr);
                vis[nbr]=true;
            }
        }
    }
}


void dfs(vector<vector<int>>&adj, int source, vector<bool>&vis){
    cout<<source<<" ";
    vis[source]=true;
    for(int nbr:adj[source]){
        if(!vis[nbr])
        dfs(adj, nbr, vis);
    }

}
int main(){
    int V=6;
    vector<bool>vis(V, false);
    vector<vector<int>> adj;
    adj.push_back({1,5});
    adj.push_back({0,2});
    adj.push_back({3,1});
    adj.push_back({2,4});
    adj.push_back({3,2,5});
     adj.push_back({0,4});

    // int comp=0;
    // for(int i=0;i<V;i++)0
    // {
    //     if(!vis[i]){
    //     bfs(adj, i, vis);
    //     comp++;
    //     }
        
    // }

    // cout<<"total comp are "<<comp;
    dfs(adj,0, vis);
    
}