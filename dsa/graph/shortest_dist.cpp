#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int shortest_dist(vector<vector<int>>&adj, int source, int dest){
    int V=adj.size();
    vector<bool>vis(V,false);
    queue<pair<int,int>> q;
    q.push({source,0});
    vis[source]=true;
    while(!q.empty()){
        auto front=q.front();
        int node=front.first;
        int level=front.second;
        if(node==dest) return level;
        q.pop();
        for(int nbr:adj[node]){
            if(!vis[nbr]){
                q.push({nbr,level+1});
                vis[nbr]=true;
            }
        }
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

     int dist= shortest_dist(adj, 0,3);
     cout<<"shoerted dist is "<<dist;


    
    
}